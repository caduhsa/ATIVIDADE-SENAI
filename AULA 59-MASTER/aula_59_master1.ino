#include <Arduino.h>
#include <BluetoothSerial.h>

BluetoothSerial BT;

uint8_t endSlave[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00}; // Enderenço do dispositivo a ser conectado

void setup()
{
    Serial.begin(9600); // Inicia a comunicação serial

    //!                      ↓ Indica que e master
    if (BT.begin("ESPCadu", true)) // Inicia a comunicação com bluetooth
    {
        Serial.println("Bluetooth iniciado com sucesso");
    }

    else
    {
        Serial.println("Erro ao iniciar Bluetooth");
    }

    if (BT.connect(endSlave)) // Conectar enderenço do dispositivo do seu colega
    {
        Serial.println("Conectado com sucesso");
    }

    else
    {
        Serial.println("Nao foi possivel conectar o dispositivo Bluetooth");
    }

    //*Serial.println("");//pula uma linha
    //* Serial.println(BT.getBtAddressString());//mostra o enderenço fisico do bluetooth
}

void loop()
{

    if (Serial.available())
    {                                         //! ↓leia ate encontrar um enter
        String mensagemEnviar = Serial.readStringUntil('\n'); // leia ate encontrar um enter
        mensagemEnviar.trim();                                // tirar os espaços do final
        BT.println(mensagemEnviar);                           // Manda printar no bluetooth do seu colega
    }

    if (BT.available())
    {                                         //! ↓leia ate encontrar um enter
        String mensagemRecebida = BT.readStringUntil('\n');
        mensagemRecebida.trim();                                  // tirar os espaços do final
        Serial.println("mensagem Recebida: " + mensagemRecebida); // Receber a mensagem no seu Serial

        if (mensagemRecebida.equals("liga"))
        {

        }

        else if (mensagemRecebida.equals("desliga"))
        {
            
        }
    }
}
