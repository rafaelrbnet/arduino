
#include <LiquidCrystal.h>
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup(){
  lcd.begin(16, 2);
}
 
void loop(){
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("CURSO ARDUINO");
  lcd.setCursor(6, 1)                                ;
  lcd.print("IFSP");
  delay(5000);
   
  for (int posicao = 0; posicao < 14; posicao++)  {
  //lcd.scrollDisplayRight(); //Rolagem para a direita
    lcd.scrollDisplayLeft();  //Rolagem para a esquerda
    delay(300);
  }
   
  lcd.clear();
  lcd.setCursor(16, 0);
  lcd.print("CURSO ARDUINO");
  lcd.setCursor(21, 1);
  lcd.print("IFSP");
   
  //Rolagem para a direita
  for (int posicao = 0; posicao < 14; posicao++)  {
  //lcd.scrollDisplayRight(); //Rolagem para a direita
    lcd.scrollDisplayLeft();  //Rolagem para a esquerda
    delay(300);
  }
}
