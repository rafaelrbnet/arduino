
#include <LiquidCrystal.h> //Carrega a biblioteca LiquidCrystal
 
//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup(){
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
}
 
void loop(){

  lcd.clear();   //Limpa a tela
  
  lcd.setCursor(1, 0);   //Posiciona o cursor na coluna 1, linha 0;

  lcd.print("CURSO ARDUINO");  //Envia o texto entre aspas para o LCD
  
  lcd.setCursor(5, 1);  //Posiciona o cursor na coluna 5, linha 4;
  
  lcd.print("IFSP");
  
  delay(5000);
}
