/*
Nome do Arquivo:Switch case
Autor:CAH
Data:25/02/2025
Descricao:.....
*/

#define pinLedvermelho 13
#define pinLeAmarelo 12
#define pinLedverde 11
void setup()
{
  pinMode(pinLedvermelho, OUTPUT);
  pinMode(pinLeAmarelo, OUTPUT);
  pinMode(pinLedverde, OUTPUT);
  
   int escolha = 1;
  
  switch (escolha)
  {
    case 0:
     digitalWrite(pinLedvermelho, HIGH);
     break;
     
    case 1:
     digitalWrite(pinLeAmarelo, HIGH);
     break;
     
    case 2:
     digitalWrite(pinLedverde, HIGH);
     break;
     
     default:
     digitalWrite(pinLedvermelho, LOW);
     digitalWrite(pinLeAmarelo, LOW);
     digitalWrite(pinLedverde, LOW);
     break;
  }  
}

void loop()
{
  
}