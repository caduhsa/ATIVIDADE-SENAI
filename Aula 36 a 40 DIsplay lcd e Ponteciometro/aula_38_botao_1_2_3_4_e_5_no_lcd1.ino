/*
Nome do Arquivo:botao 1,2,3,4 e 5 no lcd
Autor:Cah
Data:18/03/2025
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
    if(estadoBotao == 1023){
  lcd.setCursor(0,0);
  lcd.print("Nenhum botao");
  }
  if(estadoBotao >= Botao1 * 0.9 && estadoBotao <= Botao1 * 1.1){
  lcd.setCursor(0,0);
  lcd.print("Botao 1     "); 
  }
  if(estadoBotao >= Botao2 * 0.9 && estadoBotao <= Botao2 * 1.1){
  lcd.setCursor(0,0);
  lcd.print("Botao 2     ");
  }
  if(estadoBotao >= Botao3 * 0.9 && estadoBotao <= Botao3 * 1.1){
  lcd.setCursor(0,0);
  lcd.print("Botao 3     ");
  } 
  if(estadoBotao >= Botao4 * 0.9 && estadoBotao <= Botao4 * 1.1){
  lcd.setCursor(0,0);
  lcd.print("Botao 4     ");
  }
  
  if(estadoBotao >= Botao5* 0.9 && estadoBotao <= Botao5* 1.1){
  lcd.setCursor(0,0);
  lcd.print("Botao 5     ");
  }
 
  
  //Primeiro Botao:0
  //Segundo Botao:145
  //Terceiro Botao:329
  //Quarto Botao:505
  //Quinto Botao:741
  //Quando nao aperta:1023
}