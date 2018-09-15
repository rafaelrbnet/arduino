int carRed = 13;   // atribuiu pino 13 a palavra carRed
int carYellow = 12;// atribuiu pino 12 a palavra carYellow
int carGreen = 11; // atribuiu pino 11 a palavra carGreen
int pedRed = 10;   // atribuiu pino 10 a palavra pedRed
int pedGreen = 8;  // atribuiu pino 8 a palavra pedGreen
int button = 2;    // atribuiu pino 2 a palavra button

void setup() {
  pinMode(carRed, OUTPUT);   // declara como variavel de saida
  pinMode(carYellow, OUTPUT);// declara como variavel de saida
  pinMode(carGreen, OUTPUT); // declara como variavel de saida
  pinMode(pedRed, OUTPUT);   // declara como variavel de saida
  pinMode(pedGreen, OUTPUT); // declara como variavel de saida
  pinMode(button, INPUT);    // declara como variavel de entrada
}

void loop() {
  digitalWrite(carGreen, HIGH); // acende a luz verde para carro
  digitalWrite(pedRed, HIGH);   // acende a luz vermelha para pedestre
  
  int state = digitalRead(button); // verifica se o botão foi pressionado
                                   // e armazena resultado na variavel state
  if (state == HIGH) {              // Se state igual a nivel baixo (0) continue;
    delay(1000);
    digitalWrite(carGreen, LOW);  // apaga o verde para carro 
    digitalWrite(carYellow, HIGH);// acende o amarelo para carro
    delay(2000);                  // espera 2 segundos
    digitalWrite(carYellow, LOW); // apaga o amarelo para carro
    digitalWrite(carRed, HIGH);   // acende o vermelho para carro
    digitalWrite(pedRed, LOW);    // apaga o vermelho para pedestres
    digitalWrite(pedGreen, HIGH); // acende o verde para pedestres
    delay(3000);                  // tempo para que os pedestres atravessem 3s
    digitalWrite(pedGreen, LOW);  // acende o vermelho para pedestres
    digitalWrite(carRed, LOW);    // apaga o vermelho para carro
  }
}
