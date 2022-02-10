# ConectSE
<br></br>
Produto Desenvolvido para a Participação na
3a Mostra de
Inovação e
Empreendedorismo da PUCCampinas,
evento de
incentivo ao
empreendedorismo e à
Inovação.
Campinas, 2020
-----------------------------------------------------------------------------

<br></br>
CONECT.SE
<br></br>
Sua casa em suas mãos.
Manual de suporte
ao usuário
<br></br>
<br></br>
<br></br>
Índice
<br></br>
<br></br>
 Manual de suporte ao usuário
2
Prefácio……….....…………...……..................3<br></br>
O que faz o Conecte.SE….........…….............4<br></br>
Especificações técnicas………..………..........5<br></br>
Como configurar – rede Wi-Fi…....….............6<br></br>
Aplicativo no Smartphone………...….............7<br></br>
Configurações Básicas………...….................8<br></br>
Exemplos de utilização Básica…....…............9<br></br>
Configurações Avançadas……..……............10<br></br>
Exemplos de utilização Avançada.................11<br></br>
Uso e Segurança – Orientações…................12<br></br>
Desenvolvedores .......………...........……....12<br></br>
Participação na
3a Mostra de
Inovação e
Empreendedorismo da PUCCampinas,
evento de
incentivo ao
empreendedorismo e à
Inovação.
Campinas, 2020
Prefácio

<br></br><br></br><br></br>




 Manual de suporte ao usuário<br></br>
3
O Conect.SE é uma novidade no mercado
por ser um dispositivo bidirecional de
“internet das coisas” (IoT, “Internet of
Things”), que capacita ao Smartphone
enviar comandos e receber informações.
Com o Conect.SE há a popularização da
“internet das coisas” possibilitando que as
pessoas tenham a casa em suas mãos, no
Brasil são 154 milhões de celulares ativos e
a cobertura da rede de internet 4G alcança
97% da população (Fonte: R7 em
06/02/2020). Há grande um nicho de
mercado diante do baixo custo e da
simplicidade de manuseio até mesmo para
os usuários com pouca habilidade nos
smartphones.
A ideia e o desenvolvimento do Conect.SE
surgiu a partir das reuniões do Projeto de
Extensão com os alunos voluntários e com
a comunidade. O incentivo da coordenação
de Extensão para a participação na Mostra
de inovação e empreendedorismo da PUCCampinas motivou os alunos para esse
grande desafio.

<br></br>
<br></br>
<br></br>
<br></br>
<br></br>
 Manual de suporte ao usuário<br></br>
4
• O Conect.SE permite via smartphone que o
usuário possa enviar comandos (liga/desliga)
para um equipamento elétrico-eletrônico e
receber notificações sobre a presença de
pessoas num determinado ambiente.
<br></br>
• O Conect.SE pode, por exemplo, ligar e
desligar uma lâmpada nos horários
programados além de alertar se há alguém
no local.
<br></br>
• O Conect.SE poderá ser
utilizado para contabilizar o número de vezes
que uma pessoa esteve num dado local de
sua residência, indicando o nível de
atividade daquela pessoa (muita ativa como
crianças ou menos ativas como idosos).
<br></br>
• O Conect.SE pode acionar, por
exemplo, uma fechadura elétrica ou uma
cafeteira à distância. A funcionalidade com o
GPS do smartphone permitirá, por exemplo,
que as luzes sejam acesas com a
proximidade do smartphone.

<br></br>
<br></br>
<br></br>

Especificações
técnicas<br></br>
 Manual de suporte ao usuário<br></br>
5
Alimentação: Bivolt (127/220V)
Potência Elétrica < 1 Watt
Aciona um equipamento até 10A (127/220V)
Conexão Wi-Fi: 802.11 b/g/n<br></br>
-----------<br></br>
A comunicação com o Conect.SE é feita via
Smartphone através do aplicativo Blynk
(disponível na Apple Store para iOS e na
Play Store para Android)<br></br>
------------<br></br>
Componentes internos:<br></br>
NodeMCU V3 – ESP8266<br></br>
Sensor de Presença e Movimento PIR DYPME003<br></br>
Módulo relé 5V / 10A<br></br>
Software: linhas de código desenvolvidas na IDE<br></br>
Arduino com interação ao Blynk<br></br>
---------------<br></br>
Sensor de
presença
Tomada para
ligar o
equipamento (a
partir da
alimentação do
Conect.SE)
Ligar na
alimentação
127/220V
<br></br>
<br></br>
<br></br>


Conexão à rede Wi-Fi<br></br>
 Manual de suporte ao usuário<br></br>
6
 O microprocessador interno
do Conect.SE, possui uma placa Wi-Fi modelo
802.11 b/g/n que permite a conexão à internet
via roteador Wi-Fi do usuário. Com
o Smartphone conectado a qualquer rede de
internet (Wi-Fi ou 3G/4G), o usuário poderá
controlar diretamente das palmas de suas
mãos o Conect.SE.<br></br>

Para conectar o Conect.SE ao Wi-Fi é
necessário acessar o código do
microprocessador e inserir o nome da rede e a
senha. Dessa forma o dispositivo ficará online
realizando a troca de informações com
smartphone através do aplicativo da plataforma
blynk (que deve estar previamente instalado)<br></br>
Participação na
3a Mostra de
Inovação e
Empreendedorismo da PUCCampinas,
evento de
incentivo ao
empreendedorismo e à
Inovação.
Campinas, 2020
Aplicativo no
Smartphone<br></br>
 Manual de suporte ao usuário<br></br>
7<br></br>
 O Blynk é utilizado em projetos de Internet<br></br>
das coisas (IoT) para a comunicação entre
dispositivos. A partir do aplicativo Blynk ou “Blynk
App”, facilmente customizado, é feita a
comunicação com o Conect-se. Dentro do
aplicativo é possível explorar todas as
ferramentas de interação do dispositivo, sendo
que todos os comandos são apresentados de
forma intuitiva, tornando fácil a experiência do
usuário, mais agradável, e segura, pois cada
Conect.SE possui um token único (de 33
caracteres, tornando-o extremamente seguro).
O aplicativo “Blynk App”
está disponível para
download na Apple Store e
no Google Play Store.
Informações sobre a
plataforma Blynk para
desenvolvedores de IoT:
https://blynk.io/
<br></br>
Configurações
Básicas<br></br>
 Manual de suporte ao usuário
8<br></br>
Dentro do aplicativo, é possível acessar as
configurações básica (aba superior à esquerda),
onde se pode ativar o relé, por exemplo, para
acender uma lâmpada. Também é possível
selecionar o período de funcionamento, ativar o
sensor de presença, visualizar o número de
atividades e ver a hora de ocorrência da última
atividade.
Botão que Liga e
Desliga o relé.
Tela do Blynk no
Smatphone
<br></br>
<br></br>
<br></br>
Interface simples e
intuitiva
Exemplos de
utilização – Básico<br></br><br></br>
 Manual de suporte ao usuário<br></br>
9<br></br>
 Básico (aba superior à esquerda)<br></br>
1 – Ligando e desligando o relé:<br></br>
Para ligar o relé basta clicar no botão
vermelho “Desligado”; o botão ficará
verde aparecendo “Ligado”.<br></br>
2 – Ajuste do período<br></br>
de atividade/funcionamento do relé:
Para ativar, basta selecionar o
campo indicado e escolher a hora
desejada.<br></br>
3 – Ativando notificação de presença
Para ativar, clique no botão vermelho
“Desligado”; ficará verde “Ligado”.<br></br>
1 – Botão que
Liga e Desliga o relé.
2 – Display para ajustar o
Período de atividade do relé
3 – Ativa a Notificação de
presença.<br></br>
<br></br>
<br></br>
<br></br>
Configurações
avançadas<br></br>
 Manual de suporte ao usuário
10<br></br>
Dentro do aplicativo, é possível acessar as
configurações avançadas (aba superior à
direita), onde você pode ativar sua localização,
gerenciar seu controle de notificações por hora,
visualizar um gráfico com as informações de
presença por escolha do usuário, configurar o
horário de funcionamento do aparelho.
Dentro das opções de
localização é possível
determinar um “raio de
atuação” do dispositivo,
que ao perceber a
proximidade do usuário
irá ativar o Conect.SE e
desativar ao perceber a
saída do “raio de
atuação”.
<br></br>
<br></br>
Exemplos de
utilização – Avançado<br></br>
 Manual de suporte ao usuário
11<br></br>
 Avançado<br></br>
1 – Ativar o relé via GPS: Para ativar o gps basta ir
no botão Vermelho indicativo: off<br></br>
2 – Ativando Notificação por período de tempo:
Para ativar, basta arrastar o botão
deslizante para o número de horas desejado.<br></br>
3 – Programando o período de detecção de
presença: Para programar, basta clicar no
campo indicado e selecionar no horário.<br></br>
1-Liga e Desliga o GPS.<br></br>
2-Notificação por período de
Tempo.<br></br>
3- Período de detecção de
presença
Participação na
3a Mostra de
Inovação e
Empreendedorismo da PUCCampinas,
evento de
incentivo ao
empreendedorismo e à
Inovação.
Campinas, 2020
Uso, Segurança,
Orientações e
advertências<br></br>
 Manual de suporte ao usuário
12<br></br>
Não deixar o Equipamento exposto a umidade,
água ou em áreas externas. É um dispositivo “in
door”, isto é, para ambientes fechados. O tempo de
vida do aparelho está associado aos cuidados e
proteção do usuário, não nos responsabilizamos por
danos causados por má utilização do mesmo. O
dispositivo por ser alimentado na rede elétrica deve
ficar longe do longe do alcance das crianças, não
nos responsabilizamos por acidentes causados por
mal uso.
