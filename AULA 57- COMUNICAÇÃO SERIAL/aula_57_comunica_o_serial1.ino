#include <Arduino.h>

/*-------------------------------------------------------*/
/*                COMUNICAÇÃO SERIAL                     */
/*-------------------------------------------------------*/

#define pinLed 2

bool estadoLed = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop()
{
  static bool estadoLed = 0;
  static bool pisca = false;
  static int velocidade = 200;
  unsigned long tempoInicial = 0;
  if (Serial.available())
  {
    String texto = Serial.readStringUntil('\n');  // Lê caracteres da porta serial até encontrar o caractere de nova linha ('\n'). Ele retorna uma String contendo tudo o que foi lido até esse ponto.
    Serial.printf("Voce digitou: %s\n\r", texto); // Envia texto para o monitor serial.
    texto.trim();                                 // Remove espaços em branco no início e no fim da string

    if (texto.equals("liga"))
    {
      estadoLed = true;
      pisca = false;
    }

    else if (texto.equals("desliga"))
    {
      estadoLed = false;
      pisca = false;
    }
    else if (texto.equals("pisca"))
    {
      pisca = true;
    }
    else if (texto.equals("rap"))
    {
      velocidade = velocidade - 50;
      if (velocidade < 50)
        velocidade = 50;
      Serial.println(velocidade);
    }

    else if (texto.equals("dev"))
    {
      velocidade = velocidade + 50;
      if (velocidade > 50)
        velocidade = 50;
      Serial.println(velocidade);
    }
    else if (texto.equals("vel = "))
    {

      int tamanho = texto.length();

      String extracao = texto.substring(6, tamanho);

      int numero = extracao.toInt();

      if (numero >= 0 && numero <= 100)
      {
        int velocidade = map(numero, 0, 100, 1000, 30);
        Serial.println(velocidade);
      }
    }

    else
    {
      Serial.println("Digite velocidade entre 0 e 100");
    }
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
//*LER APENAS UM CARACTER
// void loop()
// {
//   if (Serial.available())//ver se tem alguma coisa dentro do monitor serial
//   {
//     char caracter = Serial.read();//esta lendo o que esta dentro,e jogando dentro de uma variavel
//     Serial.printf("Recebido letra: %c\n\r", caracter);//mandando imprimir

//     if (caracter == 'a')

//     {
//       digitalWrite(pinLed, HIGH);
//     }

//     else if (caracter == 'b')

//     {
//       digitalWrite(pinLed, LOW);
//     }
//   }

// }
