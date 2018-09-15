 
int Pot = 0;            
int valor = 0;          
  
void setup()  
{  
  Serial.begin(9600);    
  pinMode(13,OUTPUT);  
  pinMode(12,OUTPUT); 
  pinMode(11,OUTPUT); 
  pinMode(10,OUTPUT); 
  pinMode(9,OUTPUT); 
  pinMode(8,OUTPUT); 
}  
   
void loop()  
{     
  valor = analogRead(Pot);// valor=(0 a 1023) 
  
  if(valor > 100){
    digitalWrite(8,HIGH); 
  }else{
    digitalWrite(8,LOW); 
  }
  
  if(valor > 300){
    digitalWrite(9,HIGH); 
  }else{
    digitalWrite(9,LOW); 
  }
  
  if(valor > 500){
    digitalWrite(10,HIGH); 
  }else{
    digitalWrite(10,LOW); 
  }
  
  if(valor > 650){
    digitalWrite(11,HIGH); 
  }else{
    digitalWrite(11,LOW); 
  }
    
  if(valor > 850){
    digitalWrite(12,HIGH); 
  }else{
    digitalWrite(12,LOW); 
  }
  
  if(valor > 1000){
    digitalWrite(13,HIGH); 
  }
  else{
    digitalWrite(13,LOW); 
  }
}
 
