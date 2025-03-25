/*
Nome do Arquivo:ON E OFF NO LCD
Autor:CAH
Data:20/03/2025
Descricao:.....
*/



#include <LiquidCrystal_I2C.h>
#define valorBotao1 0
#define valorBotao2 145  
#define valorBotao3 329  
#define valorBotao4 505
#define valorBotao5 741
#define valorSolto 1023
#define pinLedA 11
#define pinLedB 10

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(pinLedA,OUTPUT);
  pinMode(pinLedB,OUTPUT);
 
}

void loop()
{
  static bool estadoLedA = 0;
  static bool estadoLedB = 0;
  int valorLeituraAnalogica = analogRead(A0);
  static int valorAnterior = 1023;
  static bool posicao = 0;
 
  //***** TRATAMENTO DOS BOTOES *******
  
  //BOTAO 1 PRESSIONADO
     if(valorLeituraAnalogica == valorBotao1 &&
             valorAnterior == 1023)
    {
      posicao = 0;
    }
 
   //BOTAO 2 PRESSIONADO
      else if(valorLeituraAnalogica >= valorBotao2 * 0.9  &&
            valorLeituraAnalogica <= valorBotao2 * 1.1 &&
            valorAnterior == 1023)
    {
      posicao = 1;
    }
 
  
   //BOTAO 5 PRESSIONADO
      else if(valorLeituraAnalogica >= valorBotao5 * 0.9  &&
            valorLeituraAnalogica <= valorBotao5 * 1.1 &&
            valorAnterior == 1023)
    {
    if(posicao) 
    {
      estadoLedB = !estadoLedB;

      digitalWrite(pinLedB,estadoLedB);
    }
  
  else 
    {
      estadoLedA = !estadoLedA;

      digitalWrite(pinLedA,estadoLedA);
    }
 
      }
  valorAnterior = valorLeituraAnalogica;

  //****** FIM DO TRATAMENTO DOS BOTOES ******
 
 
  // ***** ATUALIZA DISPLAY ******
  if(posicao == 0)
  {
    lcd.setCursor(0,0);
    lcd.print(">");
    lcd.setCursor(0,1);
    lcd.print(" ");
  }
  else
    {
    lcd.setCursor(0,1);
    lcd.print(">");
    lcd.setCursor(0,0);
    lcd.print(" ");
    }
 
  //***** ATUALIZACAO DOS LED A e B ******

 
  if(estadoLedA == 1){
  lcd.setCursor(2,0);
  lcd.print("LED A ON ");}  
  
  else if(estadoLedA == 0){
  lcd.setCursor(2,0);
  lcd.print("LED A OFF");}
   
  
  //***** ATUALIZACAO DOS LED B ******  
  
  if(estadoLedB == 1){
  lcd.setCursor(2,1);
  lcd.print("LED B ON ");}  
  
  else if(estadoLedB == 0){
  lcd.setCursor(2,1);
  lcd.print("LED B OFF");}
 
  
  
  
  
  
  }
