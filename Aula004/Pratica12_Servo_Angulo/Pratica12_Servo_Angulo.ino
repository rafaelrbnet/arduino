
#include<Servo.h> // Inclui a biblioteca Servo.h

Servo eixo_X; // Cria objeto para controlar o servo base
int graus=90;

void setup(){
  Serial.begin(9600);
  eixo_X.attach(6);  // Define que o servo esta ligado a porta 6
}
void loop(){
  if (Serial.available()>0){   // Se hover bits disponvel 

    Serial.print("Valor serial: ");
    Serial.println(Serial.available());
    
    graus = Serial.parseInt(); // Retorna o primeiro número inteiro do buffer serial
    eixo_X.write(graus);       // Move o eixo do servo, de acordo com o angulo
    Serial.print("Angulo = "); 
    Serial.println(graus);
  }
}
