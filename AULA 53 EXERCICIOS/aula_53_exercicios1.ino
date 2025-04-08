//* FEITO ATE O 8 EXERCICIO
#include <Arduino.h>
#include <Bounce2.h>
#define pinBoot 0
#define pinBotaoA 18
#define pinBotaoB 19
#define pinBotaoC 23

#define pinLed1 15
#define pinLed2 2
#define pinLed3 4
#define pinLed4 13

// *Instancias
Bounce botaoBoot = Bounce();
Bounce botaoA = Bounce();
Bounce botaoB = Bounce();
Bounce botaoC = Bounce();

void setup()
{
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  botaoBoot.attach(pinBoot, INPUT_PULLUP);
  botaoA.attach(pinBotaoA, INPUT_PULLUP);
  botaoB.attach(pinBotaoB, INPUT_PULLUP);
  botaoC.attach(pinBotaoC, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop()
{
  static int intesidade1 = 0;
  static int intesidade2 = 0;
  static int intesidade3 = 0;
  static int intesidade4 = 0;

  static bool modoSelecao = 1;
  static int contador = 0;
  botaoBoot.update();
  botaoA.update();
  botaoB.update();
  botaoC.update();

  if (botaoA.fell()) // SE O BOTAOA FOR PRESSIONADO
  {

    if (modoSelecao == 1)
    {
      contador++;
       if (contador > 3)
      {
        contador = 0;
      }
    }
    if (modoSelecao == 0)
    {
      if (contador == 0)
      {
        intesidade1 = intesidade1 + 10;
        Serial.println(intesidade1);
      }
      else if (contador == 1)
      {
        intesidade2 = intesidade2 + 10;
        Serial.println(intesidade2);
      }
      else if (contador == 2)
      {
        intesidade3 = intesidade3 + 10;
        Serial.println(intesidade3);
      }
      else if (contador == 3)
      {
        intesidade4 = intesidade4 + 10;
        Serial.println(intesidade4);
      }
    }
    Serial.println(contador);
  }
  if (botaoB.fell()) // SE O BOTAOB FOR PRESSIONADO
  { 
    if (modoSelecao == 1)
    {
      contador--;
       if (contador < 0)
      {
        contador = 3;
      }
    }


    if (modoSelecao == 0)
    {

      if (contador == 0)
      {
        intesidade1 = intesidade1 - 10;
        Serial.println(intesidade1);
      }
      else if (contador == 1)
      {
        intesidade2 = intesidade2 - 10;
        Serial.println(intesidade2);
      }
      else if (contador == 2)
      {
        intesidade3 = intesidade3 - 10;
        Serial.println(intesidade3);
      }
      else if (contador == 3)
      {
        intesidade4 = intesidade4 - 10;
        Serial.println(intesidade4);
      }
    }
    Serial.println(contador);
  }
  if (botaoC.fell()) // SE O BOTAOC FOR PRESSIONADO
  {
    modoSelecao = !modoSelecao;
    Serial.println(modoSelecao);
  }
}
