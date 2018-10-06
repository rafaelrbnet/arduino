#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte pac1Def[8] = {
  B00000,
  B01110,
  B11011,
  B11111,
  B11111,
  B01110,
  B00000,
  B00000
};
byte pac2Def[8] = {
  B00000,
  B01110,
  B10100,
  B11000,
  B11100,
  B01110,
  B00000,
  B00000
};

const byte pac1 = 0x0;
const byte pac2 = 0x1;
const int del = 250;

int x = 0;
int y = 0;
int px = 0;
int py = 0;

void setup() {
  lcd.createChar(0, pac1Def);
  lcd.createChar(1, pac2Def);
  lcd.begin(16, 2);
  texto();
}

void loop() {
  anim();
  x++;
  if(x>15 && y == 0)  {
    x = 0;
    y = 1;
  }
  else if(x>15 && y == 1)  {
    x = 0;
    y = 0;
    texto();
  }
}

void texto()
{
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("$$ PAC MAN $$");
  lcd.setCursor(2, 1)                                ;
  lcd.print("CURSO ARDUINO");
}

void anim(){ // character animation 
  lcd.setCursor(px,py);
  lcd.write(" ");
  lcd.setCursor(x,y);
  lcd.write(pac1);
  delay(del);
  lcd.setCursor(x,y);
  lcd.write(pac2);
  delay(del);
  px = x;
  py = y;
}
