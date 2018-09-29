int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;
int botao_Frente = 7;
int botao_Re = 6;
int botao_Direita = 5;
int botao_Esquerda = 4;

void setup(){
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(botao_Frente, INPUT);
 pinMode(botao_Re, INPUT);
 pinMode(botao_Direita, INPUT);
 pinMode(botao_Esquerda, INPUT);
}
  
void loop(){
  
  int Frente = digitalRead(botao_Frente);
  int Re = digitalRead(botao_Re); 
  int Direita = digitalRead(botao_Direita);
  int Esquerda = digitalRead(botao_Esquerda);
   
  if (Frente == HIGH){
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
  }
  if (Re == HIGH){
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
  }
  if (Direita == HIGH){
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, LOW);
  }
   if (Esquerda == HIGH){
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
  }
  if((Frente && Re && Direita && Esquerda) == LOW){
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, LOW);
  }
}

