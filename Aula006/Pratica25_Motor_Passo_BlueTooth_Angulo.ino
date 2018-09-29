
#include <Stepper.h>

#define STEPS 500

Stepper passos(STEPS, 8, 10, 9, 11);
int graus=0;
int ultimo=0;

void setup() 
{
  Serial.begin(9600);
  passos.setSpeed(60);
}
void loop() 
{
   if (Serial.available()>0){   // Se hover bits disponvel 
    graus = Serial.parseInt(); // Retorna o primeiro número inteiro do buffer serial
    
    Serial.print("Angulo = "); 
    Serial.println(graus);
    
    graus = map(graus,0,360,0,2047);
    passos.step(graus-ultimo);
    ultimo=graus;   
  }
}

