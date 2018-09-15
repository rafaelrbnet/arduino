
#include <Ultrasonic.h>

#define pino_trigger 13 //Define o pino para o trigger
#define pino_echo 12    //Define o pino para o echo
 
Ultrasonic ultrassom(pino_trigger, pino_echo);//Inicializa o sensor nos pinos definidos acima

void setup() {
   Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
}

void loop() {
   long distancia = ultrassom.Ranging(CM);// retorna a distancia em centímetros(CM)
   Serial.print("Distancia = ");
   Serial.print(distancia); //imprime o valor da variável distancia
   Serial.println(" cm");
   delay(1000);
}

