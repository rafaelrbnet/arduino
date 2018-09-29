
void setup(){
  Serial.begin(9600); 
  pinMode(11,OUTPUT); //Pino do buzzer
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop(){
  //temp. do sensor lida em volts
  float sense=analogRead(A0);
  
  //valor em graus celsius
  float temp=(((sense*5)/(1023)))/0.01;
  
  if (temp > 32){
    tone(11, 4000, 50);
    digitalWrite (7,HIGH);
    delay(200);
    tone(11, 2600, 50);
    digitalWrite (6,HIGH);
    digitalWrite (7,LOW);
    delay(200);
    digitalWrite (6,LOW);
  }
  
  else{
    delay(400);
  }
  
  Serial.print("Temperatura =  ");
  Serial.print(temp);
  Serial.println(" Graus Celsius");
}

  
