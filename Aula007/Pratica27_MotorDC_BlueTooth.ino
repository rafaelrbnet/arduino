
//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;

char dados;
  
void setup()
{
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 
 Serial.begin(9600);
}
  
void loop()
{
  
  while(Serial.available() > 0)
  {
    dados = Serial.read();
    //Caso seja recebido o caracter F
   if (dados == 'F')  { 
     //Gira o Motor A e B no sentido horario
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
   }
   
   if (dados == 'R')  { 
     //Gira o Motor A e B no sentido antihorario
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
   }
   
   if (dados == 'D')  { 
     //Gira o Motor para direita
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, LOW);
   }

   if (dados == 'E')  { 
     //Gira o Motor para esquerda
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
   }
   
   if (dados == 'P')  { 
     //Gira o Motor A e B no sentido horario
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, LOW);
   }
  }
}
