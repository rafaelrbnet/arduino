
#include <Stepper.h> //Inclusão da biblioteca

#define STEPS 500 // Definir o numero de passos por volta 

Stepper passos(STEPS, 8, 10, 9, 11); // Motor de passo ligados pinos 8 a 11:

int previsto = 0; // Declarado variavel como inteira

void setup() 
{
  passos.setSpeed(60); // Velocidade do motor 
}

void loop() 
{
  int valor = analogRead(0); // Pega o valor do sensor na entrada analogica A0
  passos.step(valor - previsto); // pega o valor lido e subtrai da posiçao anterior
                                 // com isso, o motor gira so o valor da diferença

  previsto = valor;  // quarda o valor lido na variavel previsto
}

