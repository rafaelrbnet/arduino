int botao = 2;  // atribuiu pino 2 a palavra botao e declarou como variavel inteira
int led = 13;    // atribuiu pino 13 a palavra led e declarou como variavel inteira

int estado = 0; // atribuiu o valor 0 a palavra estado e declarou como variavel inteira

void setup(){            // laço inicial (executa uma vez)
  pinMode(led,OUTPUT);   // declara como variavel de saida
  pinMode(botao,INPUT);  // declara como variavel de entrada
}

void loop(){                  // laço de loop (executa continuamente)
  estado=digitalRead(botao);  // le o estado do botao (0 ou 1)e armazena na palavra estada
  if(estado == LOW){          // Se estado igual a nivel baixo (0) continue;
    digitalWrite(led,HIGH);   // acender o LED
  }
  if(estado == HIGH){         // Se estado igual a nivel alto (1) continue;
    digitalWrite(led,LOW);    // apagar o LED
  }
}


