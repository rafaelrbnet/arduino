
#include <Stepper.h> //Inclusão da biblioteca

#define STEPS 500 // Definir o numero de passos por volta
int button1 = 7;  // pino 7 atribuido ao botao 1
int button2 = 6;  // pino 4 atribuido ao botao 2
int buttonState1 = 0; // Estado logico do botao 1  
int buttonState2 = 0; // Estado logico do botao 2
Stepper passos(STEPS, 8, 10, 9, 11); // Motor de passo ligados pinos 8 a 11:

void setup(){
  pinMode(button1, INPUT); //declarado pino 7 como entrada
  pinMode(button2, INPUT);  //declarado pino 4 como entrada
  passos.setSpeed(60);  // Velocidade do motor 
}

void loop() {
  buttonState1=digitalRead(button1); // verifica se o botão foi pressionado
  buttonState2=digitalRead(button2); // e armazena resultado na variavel state
  
  if(buttonState1 == HIGH){    // verifica se o botão foi pressionado
      passos.step(10);        // e armazena resultado na variavel buttonState
    if(buttonState1 == LOW){   
      return;                 // quando o boto for solto a funço return
    }                         // força a sair dos if's para o inicio do loop
  }
  if(buttonState2 == HIGH){
    passos.step(-10);
    if(buttonState2 == LOW){
      return;
    }
  }
}
