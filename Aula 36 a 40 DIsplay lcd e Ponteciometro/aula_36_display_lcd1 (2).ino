/*
Nome do Arquivo:Display LCD
Autor:CAH
Data:13/03/2025
Descricao:.....
*/





#include <LiquidCrystal_I2C.h>
#define Botao 2
LiquidCrystal_I2C lcd(0x27, 16, 2);
bool estadoAnterior = HIGH;
int contador = 1;

  
void setup()
{
  lcd.init();
  lcd.backlight();// liga o lcd
  lcd.noBacklight();//desliga o lcd
  lcd.setCursor(0,0); //posicionamento do texto
  lcd.print("ola mundo")//imprimi o texto no lcd
  
  
}

void loop()
{
  
}