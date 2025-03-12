#define pinBotao 10
#define pinLed 2
bool led = 0;
unsigned long intervalo = 1000;
  //------VARIAVEIS-----
  
//
void setup()
{
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT);
  
}

void loop()
{ 
 //READ -> LER
 //WRITE -> ESCREVER
  bool estadoBotao = digitalRead (pinBotao);
  Serial.println(estadoBotao);
 static unsigned long tempo = 0;
 unsigned long tempoAtual = millis();
  if(estadoBotao){
    if(tempoAtual - tempo >= intervalo){
     tempo = tempoAtual; 
    
   led = !led;
   digitalWrite(pinLed, led);
    }
  }
  
  else 
   
    digitalWrite(pinLed,LOW);
}