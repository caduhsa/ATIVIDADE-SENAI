#include <Arduino.h>

#define pinLed 2
#define pinBotao 5


void setup()
{
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);
  Serial.begin(9600);


  for (int j = 0; j <= 10; j++) 
  {
  for (int i = 0; i <= 10; i++) 
  {

Serial.printf("%d x %d = %d \n \r" , j, i, i*j);





    //Serial.print(j); 
   // Serial.print(" x "); 
   // Serial.print(i);
   // Serial.print(" = "); 
   // Serial.println(j * i);


  }
  Serial.println("--------------");
}
}
void loop()
{
  
}