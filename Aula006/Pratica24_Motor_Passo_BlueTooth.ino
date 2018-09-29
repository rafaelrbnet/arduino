#include <Stepper.h>

#define STEPS 500

char comando;

Stepper passos(STEPS, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600); 
  passos.setSpeed(60);  
}

void loop() {
  while(Serial.available() > 0) {
    comando=Serial.read();   
  }			
    if(comando=='L'){
      passos.step(-10); //L = Left
    }

    if(comando=='R'){
      passos.step(10); //R = Rigth
    }
    
    if(comando=='S'){  //S = Stop
    }
}
