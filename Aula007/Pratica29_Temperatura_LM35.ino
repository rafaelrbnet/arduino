
void setup(){
  Serial.begin(9600); }

void loop(){
  //temp. do sensor lida em volts
  float sense=analogRead(A0);
  
  //valor em graus celsius
  float temp=(((sense*5)/(1023)))/0.01;
  
  Serial.print("Temperatura =  ");
  Serial.print(temp);
  Serial.println(" Graus Celsius");
  delay(1000); 
}




  
