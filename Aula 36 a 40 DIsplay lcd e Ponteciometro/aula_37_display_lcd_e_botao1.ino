/*
Nome do Arquivo:Display LCD e botao
Autor:CAH
Data:17/03/2025
Descricao:.....
*/


#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
#define pinled 13
#define Botao 2
bool estadoBotao = 0;
bool estadoAtual = 0;
bool estadoAnterior = 0;
bool estadoLed = 0;
void setup()
{
   lcd.init();
  lcd.backlight();
  
    pinMode(Botao, INPUT);
  pinMode(pinled,OUTPUT);
  
}
void loop()
{
    
    int estadoAtual = digitalRead(Botao);
  if (estadoAtual == 1 && estadoAnterior == 0){
        
    estadoLed = !estadoLed;
    digitalWrite(pinled,estadoLed);
    }
    estadoAnterior = estadoAtual;
  if(estadoLed == 1){
    lcd.setCursor(0,0);
     lcd.print("ligado   ");
  }
  
  else{
    lcd.setCursor(0,0);
    lcd.print("desligado");
  }
}