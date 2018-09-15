
byte leds[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; // laço para declarar os pinos
int atraso;
int direction = 1;
int led_atual = 0;
int pot = 0; // pino analogico para o potenciometro

void setup(){
  for (int x=0; x<sizeof(leds); x++){ //declara os pinos de 0 a 13 como OUTPUT
    pinMode(leds[x], OUTPUT); 
  }
}

void loop(){
  atraso = analogRead(pot);
  
  delay(atraso);
  
  for (int x=0; x<sizeof(leds); x++){  // apaga todos os leds
    digitalWrite(leds[x], LOW);
  }
  
  digitalWrite(leds[led_atual], HIGH);
  led_atual += direction;   // incrementa de acordo com o valor de direction
                            // x += y; equivale --> x = x + y;
                            
  if(led_atual == 13) {direction = -1;} // altera a direção se tivermos atingido o fim
  if(led_atual == 0) {direction = 1;}
}
