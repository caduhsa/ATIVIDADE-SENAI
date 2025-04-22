#include <Arduino.h>
#include <BluetoothSerial.h>

#define pinLed 2

BluetoothSerial BT;

void setup()
{
    Serial.begin(9600);
    pinMode(pinLed, OUTPUT);
    if (BT.begin("ESPSlaveCadu"))
        Serial.println("Bluetooth iniciado com sucesso!!");

    else
        Serial.println("Erro ao iniciar o Bluetooth");
}

void loop()

{
    static bool estadoLed = 0;
    static bool pisca = 0;
    static int tempo = 300;

    if (Serial.available()) // se tiver algo na serial
    {
        String mensagemEnviar = Serial.readStringUntil('\n');
        mensagemEnviar.trim();
        BT.println(mensagemEnviar);
    }
    if (BT.available())
    {
        String mensagemRecebida = BT.readStringUntil('\n');
        mensagemRecebida.trim();
        Serial.printf("mensagem recebida: %s \n\r", mensagemRecebida);

        if (mensagemRecebida.equals("liga"))
        {
            pisca = 0;
            estadoLed = 1;
        }
        else if (mensagemRecebida.equals("desliga"))
        {
            estadoLed = 0;
            pisca = 0;
        }
        else if (mensagemRecebida.equals("pisca"))
        {
            pisca = 1;
        }
    }
    if (pisca == 1)
    {
        unsigned long tempoAtual = millis();
        static unsigned long tempoAnterior = 0;

        if (tempoAtual - tempoAnterior > tempo)
        {
            estadoLed = !estadoLed;
            tempoAnterior = tempoAtual;
        }
    }
    digitalWrite(pinLed, estadoLed);
}
