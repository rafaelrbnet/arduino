
#include <Ultrasonic.h>

#define pino_trigger 13 //Define o pino para o trigger
#define pino_echo 12    //Define o pino para o echo
 
Ultrasonic ultrassom(pino_trigger, pino_echo);//Inicializa o sensor nos pinos definidos acima

void setup() {
   Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
   pinMode(10,OUTPUT); //Pino do buzzer
}

void loop() {
   long distancia = ultrassom.Ranging(CM);// retorna a distancia em centímetros(CM)
   if(distancia<100){
      tone(10,2600,50);
      delay(distancia*10);
   }     
   Serial.print("Distancia = ");
   Serial.print(distancia); //imprime o valor da variável distancia
   Serial.println(" cm");
   //delay(1000);
}

