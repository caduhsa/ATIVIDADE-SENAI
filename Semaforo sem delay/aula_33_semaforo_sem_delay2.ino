/*
Nome do Arquivo: Semaforo sem delay
Autor:CAH
Data:10/03/2025
Descricao:.....
*/

#define pinLedAmarelo 12
#define pinLedVermelho 13
#define pinLedVerde 11 
#define tempoVerde 3000 
#define tempoAmarelo 2000 
#define tempoVermelho 5000 
unsigned long tempoInicial = 0; 
int faseSemaforo = 0; 

void setup() 
{ 
pinMode (pinLedVermelho, OUTPUT); 
pinMode(pinLedVerde, OUTPUT); 
pinMode (pinLedAmarelo, OUTPUT); 
Serial.begin(9600); 
}

void loop() 
{ 
  unsigned long tempoAtual = millis();  
  
if (tempoAtual - tempoInicial >= 1000) 
{ 
faseSemaforo++; 
tempoInicial = tempoAtual; 
if (faseSemaforo == 10) faseSemaforo = 0; 
Serial.println(faseSemaforo); 
} 
  
  switch (faseSemaforo){ 
case 0: 
digitalWrite(pinLedVermelho, HIGH); 
digitalWrite(pinLedAmarelo, LOW); 
digitalWrite(pinLedVerde, LOW); 
break; 
  
case 5: 
digitalWrite(pinLedVermelho, LOW); 
digitalWrite (pinLedAmarelo, LOW); 
digitalWrite(pinLedVerde, HIGH); 
break; 
  
case 8: 
digitalWrite(pinLedVermelho, LOW); 
digitalWrite(pinLedAmarelo, HIGH); 
digitalWrite(pinLedVerde, LOW); 
break; 
 }
}