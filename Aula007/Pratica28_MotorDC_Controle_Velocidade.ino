int IN1 = 10;
int IN2 = 9;

void setup(){
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 Serial.begin(9600);
}
  
void loop(){
  
   int pot = analogRead(A0);
   float pwm = map(pot,0,1023,0,255);
   
   analogWrite(IN1,pwm);
 //digitalWrite(IN1,HIGH);
   digitalWrite(IN2,LOW);
   
   Serial.print("Saida PWM = ");
   Serial.println(pwm);
   delay(500);
}
