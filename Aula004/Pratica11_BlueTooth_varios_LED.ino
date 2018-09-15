char comando;
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT); 
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

void Apaga_LEDs(){
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW); 
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW); 
    digitalWrite(LED6, LOW);
}

void loop() {
  // Enquanto houverem bytes disponíveis;
  while(Serial.available() > 0)   {
    // Lê byte do buffer serial;
    comando=Serial.read(); 
  
  if(comando=='A')  {
    Apaga_LEDs();
    digitalWrite(LED1, HIGH);
  }
    if(comando=='B')  {
    Apaga_LEDs();
    digitalWrite(LED2, HIGH);
  }
    if(comando=='C')  {
    Apaga_LEDs();
    digitalWrite(LED3, HIGH);
  }
    if(comando=='D')  {
    Apaga_LEDs();
    digitalWrite(LED4, HIGH);
  }
    if(comando=='E')  {
    Apaga_LEDs();
    digitalWrite(LED5, HIGH);
  }
    if(comando=='F')  {
    Apaga_LEDs();
    digitalWrite(LED6, HIGH);
  } 
  if(comando=='X')  {
    Apaga_LEDs();
  } 
}}
