
#define red 13     // declara saida 13 digital como  variavel inteira
int yellow = 12;  // declara saida 12 digital como  variavel inteira
int green = 11;   // declara saida 11 digital como  variavel inteira

void setup() {         // laço inicial (executa uma vez)      
 
  pinMode(red, OUTPUT);     // declara como variavel de saida
  pinMode(yellow, OUTPUT);  // declara como variavel de saida
  pinMode(green, OUTPUT);   // declara como variavel de saida
}

void loop() {         // laço de loop (executa continuamente)
  digitalWrite(green, HIGH);   //acende LED verde
  delay(2000);                 //espera 2 segundos
  digitalWrite(green, LOW);    //apaga LED verde
  digitalWrite(yellow, HIGH);  //acende LED amarelo
  delay(2000);                 //espera 2 segundos
  digitalWrite(yellow, LOW);   //apaga LED amarelo
  digitalWrite(red, HIGH);     //acende LED vermelho
  delay(2000);                 //espera 2 segundos
  digitalWrite(red, LOW);      //apaga LED amarelo

  
}



