
#include <Ultrasonic.h>

#define pino_trigger 13 //Define o pino para o trigger
#define pino_echo 12    //Define o pino para o echo
 
Ultrasonic ultrassom(pino_trigger, pino_echo);//Inicializa o sensor nos pinos definidos acima

void setup() {
  Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
  pinMode(11,OUTPUT); //Define a porta do Led como saída
  pinMode(10,OUTPUT); //Define a porta do Led como saída
  pinMode(9,OUTPUT);  //Define a porta do Led como saída
  pinMode(8,OUTPUT);  //Define a porta do Led como saída
}

void loop() {
   long distancia = ultrassom.Ranging(CM);// retorna a distancia em centímetros(CM)
   
  if(distancia<40) {
     digitalWrite(8,HIGH);
  }
  else{
    digitalWrite(8,LOW);
  }
  if(distancia<30) {
     digitalWrite(9,HIGH);
  }
  else{
    digitalWrite(9,LOW);
  }
  if(distancia<20) {
     digitalWrite(10,HIGH);
  }
  else{
    digitalWrite(10,LOW);
  }
  if(distancia<10) {
     digitalWrite(11,HIGH);
  }
  else{
    digitalWrite(11,LOW);
  }
      
   Serial.print("Distancia = ");
   Serial.print(distancia); //imprime o valor da variável distancia
   Serial.println(" cm");
   delay(1000);
}

