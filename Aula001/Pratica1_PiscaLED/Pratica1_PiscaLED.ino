// Pratica 1 – LED pisca		
#define ledPin 8			

void setup() {		 	
  pinMode(ledPin, OUTPUT); 								       
}

void loop() { 		     			
  digitalWrite(ledPin, HIGH); 
  delay(50);					
  digitalWrite(ledPin, LOW);  
  delay(50);  
} 
