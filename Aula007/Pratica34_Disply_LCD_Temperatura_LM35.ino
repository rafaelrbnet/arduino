
#include <LiquidCrystal.h> 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte grau[8] ={ B00001100,B00010010,B00010010,B00001100,
                B00000000,B00000000,B00000000,B00000000,};

float tempMin = 999;
float tempMax = 0;

void setup(){
  lcd.begin(16, 2);
  lcd.createChar(0, grau);
}

void loop(){
  float sense=analogRead(A0);
  
  float tempC=(((sense*5)/(1023)))/0.01;

  if (tempC < tempMin)  {
    tempMin = tempC;
  }
  if (tempC > tempMax)  {
    tempMax = tempC;
  }
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp.: ");
  lcd.setCursor(7, 0);
  lcd.print(tempC);
  lcd.setCursor(13, 0);
  lcd.write((byte)0);
  lcd.setCursor(14, 0);
  lcd.print("C");
  
  lcd.setCursor(0, 1);
  lcd.print("L:");
  lcd.setCursor(3, 1);
  lcd.print(tempMin);
  lcd.setCursor(7, 1);
  lcd.print("  H: ");
  lcd.setCursor(12, 1);
  lcd.print(tempMax);
  
  delay(1000); 
}
  
