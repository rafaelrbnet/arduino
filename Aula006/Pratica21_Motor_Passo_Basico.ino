#include<Stepper.h> //Inclusão da biblioteca

#define GIRO 500  // Definir o numero de passos por volta 
                  // Para Motor de Passo Unipolar 28BYJ-48 
                  // de 64 passos/volta utilizaremos 
                  // 500 passos/volta para suavizar a rotaçao

Stepper passos(GIRO,8,10,9,11); // Motor de passo ligados pinos 8 a 11:

void setup(){
  passos.setSpeed(60); // Velocidade do motor em pwm:
}

void loop(){
  passos.step(-1024); // meia volta no sentido horário:
  delay(1000);

  passos.step(2048); // volta completa no sentido anti-horário:
  delay(1000);
}
