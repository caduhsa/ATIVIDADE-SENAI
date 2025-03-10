/*
Nome do Arquivo: Semaforo sem delay
Autor:CAH
Data:10/03/2025
Descricao:.....
*/
  
#define pinLedVermelho 13 
#define pinLedAmarelo 12 
#define pinLedVerde 11 
#define tempoVerde 3000 
#define tempoAmarelo 2000 
#define tempoVermelho 5000 
unsigned long tempoInicial = 0; 
char faseSemaforo = 0; 
 
void setup() 
{ 
pinMode (pinLedVermelho, OUTPUT); 
pinMode (pinLedVerde, OUTPUT); 
pinMode (pinLedAmarelo, OUTPUT); 
} 
void loop() 
{ 
unsigned long tempoAtual = millis(); 
  
if(faseSemaforo == 0)
{
digitalWrite (pinLedVermelho, HIGH); 
digitalWrite(pinLedAmarelo, LOW); 
digitalWrite(pinLedVerde, LOW); 
if (tempoAtual - tempoInicial >= tempoVermelho) 
{ 
faseSemaforo = 1; 
tempoInicial = tempoAtual; 
  }
} 
  
else if(faseSemaforo == 1)   
{
digitalWrite (pinLedVermelho, LOW); 
digitalWrite(pinLedAmarelo, LOW); 
digitalWrite (pinLedVerde, HIGH); 
if (tempoAtual - tempoInicial >= tempoVerde) 
{ 
 
faseSemaforo = 2; 
tempoInicial = tempoAtual; 
} 
}
else if(faseSemaforo == 2) 
{
digitalWrite(pinLedVermelho, LOW); 
digitalWrite (pinLedAmarelo, HIGH); 
digitalWrite (pinLedVerde, LOW); 
if (tempoAtual - tempoInicial >= tempoAmarelo) 
{ 
faseSemaforo = 0; 
tempoInicial = tempoAtual;
 }
  }
}
  