
#include<Servo.h> // Inclui a biblioteca Servo.h

Servo eixo_X; // Cria objeto para controlar o servo base
int graus;
int pot;

void setup(){
  Serial.begin(9600);
  eixo_X.attach(6);  // Define que o servo esta ligado a porta 6
}
void loop(){
  pot=analogRead(0);  // Le o valor do potenciomentro no pino A0
  graus=map(pot,0,1023,0,180); // mapea o valor lido entre 0 e 180 graus
  eixo_X.write(graus); // Move o eixo do servo, de acordo com o angulo
  Serial.print ("Valor Potenciometro = ");
  Serial.print (pot);
  Serial.print ("    Angulo = ");
  Serial.println (graus);
  delay(15);
}
