#include <Arduino.h>
#include <BluetoothSerial.h>

/*-------------------------------------------------------*/
/*                      BLUETOOTH                        */
/*-------------------------------------------------------*/



#define pinLed 2

BluetoothSerial BT;

void setup()
{
  pinMode(pinLed, OUTPUT);

  BT.begin("ESPCadu");
}

void loop()
{
  static bool estadoLed = false;
  static bool pisca = false;
  static int velocidade = 200;
  unsigned long tempoInicial = 0;
  if (BT.available())
  {
    String mensagem = BT.readStringUntil('\n');
    mensagem.trim();

    if (mensagem.equals("liga"))
    {
      estadoLed = true;
      BT.println("LED LIGADO");
    }

    else if (mensagem.equals("desliga"))
    {
      estadoLed = false;
      BT.println("LED DESLIGADO");
    }
    else if (mensagem.equals("pisca"))
    {
      pisca = true;
    }

    if (pisca == true)
    {
      unsigned long tempoAtual = millis();
      static unsigned long tempoInicial = 0;

      if (tempoAtual - tempoInicial > velocidade)
      {
        estadoLed = !estadoLed;
        tempoInicial = tempoAtual;
      }
    }
    digitalWrite(pinLed, estadoLed);
  }
}