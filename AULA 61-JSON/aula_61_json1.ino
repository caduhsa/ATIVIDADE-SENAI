#include <Arduino.h>
#include <ArduinoJson.h>

JsonDocument doc;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  static float temperatura;
  static int umidade;
  static String estado = "";
  static int botao;

  if (Serial.available())
  {
    String msg = Serial.readStringUntil('\n');
    msg.trim();

    deserializeJson(doc, msg); //! Vai mostrar para o arduino que esta em formato JSON para o arduino conseguir as informacoes

    if (!doc["temperatura"].isNull())//! Faz uma verificaco se existe conteudo ,se nao existir ele continua com a informacao anterior
      temperatura = doc["temperatura"];

    if (!doc["umidade"].isNull())
      umidade = doc["umidade"];

    if (!doc["estado"].isNull())
      estado = doc["estado"].as<String>(); //! Vai pegar o texto que voce manda na serial indentificar as palavras acima para arrumar o texto na serial

    if (!doc["pressionamentos"].isNull())
      botao = doc["pressionamentos"];

    Serial.printf("A temperatura e %.1f \n\r", temperatura);
    Serial.printf("A umidade esta em %d \n\r", umidade);
    Serial.printf("O estado esta em %s \n\r", estado);
    Serial.printf("O botao foi pressionado %d vezes\n\r", botao);
  }
}
