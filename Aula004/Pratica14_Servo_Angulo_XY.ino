
#include <Servo.h> 
 
Servo eixo_x; // Cria objeto para controlar o servo no eixo X
Servo eixo_y; // Cria objeto para controlar o servo no eixo Y
                
int graus=90;
int valory = 90;
int valorx = 90;
int pos=0;
int letra;
 
void setup() { 
  Serial.begin(9600); 
  eixo_x.attach(6);  // Define que o servo esta ligado a porta 6
  eixo_y.attach(5);  // Define que o servo esta ligado a porta 5
}   

void loop() { 
  if (Serial.available() > 0) { // Se hover bits disponvel 
   graus = Serial.parseInt(); // Retorna o numero inteiro do buffer serial
   letra = Serial.read();// lê inteiro recebido pela comunicação série 
   
    if (letra == 'x') {  // Se a letra apos angulo for x
      eixo_x.write(graus); // Move o eixo X do servo, de acordo com o angulo
      delay(15);
    }
    Serial.print("Posicao do eixo X em = ");  
    Serial.print(graus);  
    Serial.println(" graus");        

    if (letra == 'y') { // Se a letra apos angulo for y
      eixo_y.write(graus); // Move o eixo Y do servo, de acordo com o angulo
      delay(15);
    }
    Serial.print("Posicao do eixo Y em = ");  
    Serial.print(graus);  
    Serial.println(" graus"); 
  }
}
  
