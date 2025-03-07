/*
Nome do Arquivo:Logica de Tempo sem delay
Autor:CAH
Data:07/03/2025
Descricao:.....
*/

#define pinLedLaranja 13
unsigned long tempoInicial = 0;
bool estadoLed = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pinLedLaranja,OUTPUT);
}

void loop()
{
unsigned long tempoAtual = millis();
  if(tempoAtual - tempoInicial >= 1000)
  {
    /*  
     PRIMEIRO JEITO DE FAZER
    if(estadoLed)
  	{
    	digitalWrite(pinLedLaranja, LOW);
    	estadoLed = 0;
  	}
    
	else
	{
  		digitalWrite(pinLedLaranja, HIGH);
  		estadoLed = 1;
	}
  
  tempoInicial = tempoAtual;
	}
    
    SEGUNDO JEITO DE FAZER
    
   estadoLed = !estadoLed;
   digitalWrite(pinLedLaranja, estadoLed)
 tempoInicial = tempoAtual;   
 
 ! : INVERTE O RESULTADO
    
}*/
  
  
  
  
  
  
  
  