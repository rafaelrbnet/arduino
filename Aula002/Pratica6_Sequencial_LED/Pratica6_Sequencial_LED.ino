
int leds[]={8,9,10,11,12,13};  

void setup(){
  
  for(int i=0; i<6; i++){    
    pinMode(leds[i],OUTPUT);
  }
}
 
void loop(){
  
  for(int i=0; i<6; i++){
    acende(leds[i], HIGH);
  }
  
  for(int i=0; i<6; i++){
    acende(leds[i], LOW);
  }
}
// função personaliza para controlar a ação dos leds
void acende(int led, int acao){
  digitalWrite(led, acao);
  delay(500);
}



