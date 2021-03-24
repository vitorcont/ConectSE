# ConectSE

Produto Desenvonvido para a Participação na
3a Mostra de
Inovação e
Empreendedorismo da PUCCampinas,
evento de
incentivo ao
empreendedorismo e à
Inovação.
Campinas, 2020
-----------------------------------------------------------------------------


CONECT.SE

Sua casa em suas mãos.
Manual de suporte
ao usuário



Índice




 Manual de suporte ao usuário
2
Prefácio……….....…………...……..................3
O que faz o Conecte.SE….........…….............4
Especificações técnicas………..………..........5
Como configurar – rede Wi-Fi…....….............6
Aplicativo no Smartphone………...….............7
Configurações Básicas………...….................8
Exemplos de utilização Básica…....…............9
Configurações Avançadas……..……............10
Exemplos de utilização Avançada.................11
Uso e Segurança – Orientações…................12
Desenvolvedores .......………...........……....12
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






 Manual de suporte ao usuário
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






 Manual de suporte ao usuário
4
• O Conect.SE permite via smartphone que o
usuário possa enviar comandos (liga/desliga)
para um equipamento elétrico-eletrônico e
receber notificações sobre a presença de
pessoas num determinado ambiente.

• O Conect.SE pode, por exemplo, ligar e
desligar uma lâmpada nos horários
programados além de alertar se há alguém
no local.

• O Conect.SE poderá ser
utilizado para contabilizar o número de vezes
que uma pessoa esteve num dado local de
sua residência, indicando o nível de
atividade daquela pessoa (muita ativa como
crianças ou menos ativas como idosos).

• O Conect.SE pode acionar, por
exemplo, uma fechadura elétrica ou uma
cafeteira à distância. A funcionalidade com o
GPS do smartphone permitirá, por exemplo,
que as luzes sejam acesas com a
proximidade do smartphone.





Especificações
técnicas
 Manual de suporte ao usuário
5
Alimentação: Bivolt (127/220V)
Potência Elétrica < 1 Watt
Aciona um equipamento até 10A (127/220V)
Conexão Wi-Fi: 802.11 b/g/n
-----------
A comunicação com o Conect.SE é feita via
Smartphone através do aplicativo Blynk
(disponível na Apple Store para iOS e na
Play Store para Android)
------------
Componentes internos:
NodeMCU V3 – ESP8266
Sensor de Presença e Movimento PIR DYPME003
Módulo relé 5V / 10A
Software: linhas de código desenvolvidas na IDE
Arduino com interação ao Blynk
---------------
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





Conexão à rede Wi-Fi
 Manual de suporte ao usuário
6
 O microprocessador interno
do Conect.SE, possui uma placa Wi-Fi modelo
802.11 b/g/n que permite a conexão à internet
via roteador Wi-Fi do usuário. Com
o Smartphone conectado a qualquer rede de
internet (Wi-Fi ou 3G/4G), o usuário poderá
controlar diretamente das palmas de suas
mãos o Conect.SE.

Para conectar o Conect.SE ao Wi-Fi é
necessário acessar o código do
microprocessador e inserir o nome da rede e a
senha. Dessa forma o dispositivo ficará online
realizando a troca de informações com
smartphone através do aplicativo da plataforma
blynk (que deve estar previamente instalado)
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
Smartphone
 Manual de suporte ao usuário
7
 O Blynk é utilizado em projetos de Internet
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

Configurações
Básicas
 Manual de suporte ao usuário
8
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



Interface simples e
intuitiva
Exemplos de
utilização – Básico
 Manual de suporte ao usuário
9
 Básico (aba superior à esquerda)
1 – Ligando e desligando o relé:
Para ligar o relé basta clicar no botão
vermelho “Desligado”; o botão ficará
verde aparecendo “Ligado”.
2 – Ajuste do período
de atividade/funcionamento do relé:
Para ativar, basta selecionar o
campo indicado e escolher a hora
desejada.
3 – Ativando notificação de presença
Para ativar, clique no botão vermelho
“Desligado”; ficará verde “Ligado”.
1 – Botão que
Liga e Desliga o relé.
2 – Display para ajustar o
Período de atividade do relé
3 – Ativa a Notificação de
presença.



Configurações
avançadas
 Manual de suporte ao usuário
10
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


Exemplos de
utilização – Avançado
 Manual de suporte ao usuário
11
 Avançado
1 – Ativar o relé via GPS: Para ativar o gps basta ir
no botão Vermelho indicativo: off
2 – Ativando Notificação por período de tempo:
Para ativar, basta arrastar o botão
deslizante para o número de horas desejado.
3 – Programando o período de detecção de
presença: Para programar, basta clicar no
campo indicado e selecionar no horário.
1-Liga e Desliga o GPS.
2-Notificação por período de
Tempo.
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
advertências
 Manual de suporte ao usuário
12
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
Desenvolvedores
Alunos do 2º Ano de Eng. de Computação - PUC-Campinas
Guilherme M. B. Garros –gmarquesbraitgarros@gmail.com
Lucas Grass Beraldo – 19246925 - Grassberaldo@gmail.com
Vitor Ferrara Conti –vitorconti18@gmail.com
Alunos do 3º Ano de Eng. de Computação - PUC-Campinas
Carlos Henrique V. Marques - carlos_dr.kyrillos@hotmail.com
Giuliano Marques Sanfins - gsanfins@gmail.com
Matheus Henrique Moretti - moretti.matheus.h@gmail.com
Professor Extensionista e Orientador - PUC-Campinas
Francisco de Salles C. Gomes - salles@puc-campinas.edu.br
