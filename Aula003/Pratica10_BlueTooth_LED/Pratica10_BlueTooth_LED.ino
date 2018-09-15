char comando; // funçao que armazena um caractere.
int LED1 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT); 
}

void loop() {
 
  while(Serial.available() > 0) { // Enquanto houverem bytes disponíveis;
    
    comando=Serial.read(); // Lê byte do buffer serial;
    
  if(comando=='L')  {
    digitalWrite(LED1, HIGH);}
  if(comando=='D')  {
    digitalWrite(LED1, LOW);}
  }
}  


