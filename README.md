# SmartGreenhouses

  Este projeto tem como objetivo criar uma estufa inteligente utilizando um Arduino Uno e outros componentes eletrônicos, 
incluindo um sensor de temperatura DHT11 , um motor de passo, um buzzer e um LED. A estufa será capaz de monitorar a temperatura ambiente e, 
quando atingir um determinado limite, acionará um motor de passo para girar uma hélice, resfriando o ambiente interno. Além disso, 
o sistema fornecerá notificações sonoras e visuais para alertar os usuários sobre as condições da estufa, 
além de possuir conexão com a plataforma Arduino Cloud que servirá para gerenciamento de dados e do código.

Recursos:

Os seguintes recursos serão necessários para o projeto:

Arduino Uno (R3): O Arduino Uno atuará como o cérebro da estufa, controlando todos os componentes eletrônicos e executando o código de automação;

Esp32 (DOIT ESP32 DEVKIT V1): O Esp atuará como o cérebro da estufa, controlando todos os componentes eletrônicos, executando o código de automação e conectando com a plataforma arduino cloud para a retenção de dados do sensor;

Plataforma Arduino Cloud: A plataforma Arduino Cloud será utilizada para criar, gerenciar e monitorar o código de automação remotamente;

Sensor de Temperatura DHT11: O sensor de temperatura DHT11 será responsável por medir a temperatura ambiente dentro da estufa, fornecendo informações precisas para o controle térmico;

Motor de Passo: O motor de passo será usado para girar uma hélice que promoverá a ventilação e o resfriamento da estufa quando a temperatura ultrapassar um limite definido;

Buzzer: O buzzer será utilizado para emitir notificações sonoras quando a temperatura atingir níveis críticos ou quando ocorrerem eventos específicos, como a ativação do motor de passo;

LED: O LED será usado para fornecer notificações visuais, piscando ou mudando de cor de acordo com as condições estabelecidas no sistema.


Simulação virtual do circuito:
![Sistema de Monitoramento de Temperatura](https://github.com/KalilRamos/SmartGreenhouses/assets/134665832/2f5dc838-6339-4c6e-8f4d-58b0d9695a7b)


Protótipo 1:
Para o prototipo 1, fizemos algumas alterações em relação à simulação do tinkercad, utilizamos um motor de passo utilizando 4 pinos do arduino. 

![image](https://github.com/KalilRamos/SmartGreenhouses/assets/134665832/7029427d-35c9-4d00-8ec6-fe0174a7ae68)


Protótipo 2:
Para o prototipo 2, trocamos a placa arduíno uno pela placa esp32 para conseguirmos fazer a conecção com a plataforma arduíno cloud para conseguirmos reter os dados captados pelo sensor e produzir dashboards em tempo real.
Utilizamos somente o sensor DHT11 nesse protótipo para que possamos fazer testes específicos de captura de temperatura da melhor forma.

![image](https://github.com/KalilRamos/SmartGreenhouses/assets/134665832/bb9d309a-dac8-429f-a7bb-b336d35cb686)                                        

![image](https://github.com/KalilRamos/SmartGreenhouses/assets/134665832/29ade9a2-b13a-4e71-b4f6-428c7f59757e)
                                           





