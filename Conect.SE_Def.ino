#define BLYNK_PRINT Serial
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <TimeLib.h>
#include <WidgetRTC.h>


bool flag = false;
bool flag_h = false;
bool flag_lim = false;
int contador_atividade = 0;
byte AtualH;
byte AtualM;
String strHorario;
byte UltimaH;
byte UltimaM;
byte GraficoMin = 0;
int GraficoCont = 0;

#define rele 5   //D1
#define sensor 4 //D2
bool v0 = false;
bool v1 = false;
byte v5 = 0;
int v7;
bool v8 = false;
bool gps = false;
WidgetLED led_rele(V2);
WidgetLED led_sensor(V3);
WidgetLED led_alerta(V6);
WidgetRTC rtc;


char auth[] = "yueiblhMozCJ7bLCd6qzwUPtqucaolBY";
char ssid[] = "Conti 2.4GHz";
char pass[] = "Wolff2015";

BLYNK_CONNECTED()
{
  rtc.begin();
}

BLYNK_WRITE(V0) //Rele
{
  v0 = bool(param.asInt());
}

BLYNK_WRITE(V1) //Notificação
{
  v1 = bool(param.asInt());
}

BLYNK_WRITE(V5) //Notificação Tempo Limite
{
  v5 = byte(param.asInt());
}

BLYNK_WRITE(V8) //Rele
{
  v8 = bool(param.asInt());
}

BLYNK_WRITE(V9) //Rele
{
  gps = bool(param.asInt());
}

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(rele, OUTPUT);
  pinMode(sensor, INPUT);
  Blynk.begin(auth, ssid, pass);
}

void f_rele()
{
  if (v0 == true)
  {
    digitalWrite(rele, HIGH);
    led_rele.on();
  }
  else
  {
    digitalWrite(rele, LOW);
    led_rele.off();
  }

}

void f_sensor()
{
  int sinal = digitalRead(sensor);
  if (sinal == HIGH)
  {
    led_sensor.on();
    if (v1 == true)
    {
      Blynk.notify("AVISO DE PRESENÇA");
    }
    if (flag == false)
    {
      flag = true;
      contador_atividade++;
    }
    UltimaH = int(hour());
    UltimaM = int(minute());
    strHorario = String(UltimaH) + ":" + UltimaM;
  }
  else
  {
    led_sensor.off();
    flag = false;
  }

  if (AtualM/15 != GraficoMin/15)
  {
    GraficoMin = AtualM;
    GraficoCont = contador_atividade - GraficoCont;
    Blynk.virtualWrite(V7, GraficoCont);
    GraficoCont = contador_atividade;
  }
  
  f_limite_horario();
  Blynk.virtualWrite(V4, "update", 0, "Num de Ativ.", String(contador_atividade));
  Blynk.virtualWrite(V4, "update", 1, "Ultima Ativ.", strHorario);
}

void f_limite_horario()
{
  byte Hora = 0;
  if (v5 != 0)
  {
    Hora = UltimaH + v5;
    Blynk.setProperty(V5, "color", "#43C43F");
    if (Hora > 23)
    {
      Hora = Hora - 24;
    }
    Serial.println(Hora);
    Serial.println(UltimaM - AtualM);
    if (Hora == AtualH && UltimaM - AtualM == 0 && flag_lim == false)
    {
      Blynk.notify("TEMPO LIMITE SEM ATIVIDADES NO AMBIENTE EXCEDIDO");
      led_alerta.on();
      flag_lim = true;
    }
  }
  else
  {
    Blynk.setProperty(V5, "color", "#D3435C");
    led_alerta.off();
    flag_lim = false;
  }
}

void f_horaria()
{
  AtualH = byte(hour());
  AtualM = byte(minute());
  if (flag_h == false)
  {
    Blynk.virtualWrite(V4, "add", 0, "Atividade", String(contador_atividade));
    Blynk.virtualWrite(V4, "add", 1, "Ultima Atividade", strHorario);
    Blynk.virtualWrite(V5, 0);
    flag_h = true;
  }
}

void f_gps()
{
  if(v8==true && gps==true)
  {
    Blynk.virtualWrite(V0,1);
    v0=true;
  }
  else if(v8==true && gps==false)
  {
    Blynk.virtualWrite(V0,0);
    v0=false;
  }
}

void loop()
{
  Serial.println("-------------------------BAIXO");
  Serial.println(v0);
  f_horaria();
  Serial.println(v0);
  f_gps();
  Serial.println(v0);
  f_rele();
  Serial.println(v0);
  f_sensor();
  Serial.println(v0);
  Serial.println("------------------CIMA-------------");
  // Serial.println("Ultima Hora: "+UltimaHora[0]+":"+UltimaHora[1]);
  Blynk.run();
}
