/*
Nome do Arquivo:Seta no lcd
Autor:CAH
Data:19/03/2025
Descricao:.....
*/

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
// C++ code
//
#define Botao A0
#define Botao1 0 
#define Botao2 145 
#define Botao3 329 
#define Botao4 505
#define Botao5 741

void setup()
{
  lcd.init(); 
  lcd.backlight ();
  Serial.begin(9600);
  pinMode(Botao, INPUT);
}

void loop()
{
  int estadoBotao = analogRead(A0);   
  
  if(estadoBotao == Botao1){
  lcd.setCursor(0,0);
  lcd.print(">"); 
  lcd.setCursor(0,1);
  lcd.print(" "); 
  }
  else if(estadoBotao == Botao2){
  lcd.setCursor(0,1);
  lcd.print("> ");
  lcd.setCursor(0,0);
  lcd.print(" "); 
  }
    //Primeiro Botao:0
  //Segundo Botao:145
  //Terceiro Botao:329
  //Quarto Botao:505
  //Quinto Botao:741
  //Quando nao aperta:1023
}