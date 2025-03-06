#define pinLedAzul 13
#define pinLedAmarelo 12
#define pinLedVermelho 11
#define pinLedVerde 10
#define pinLedLaranja 9

void setup()
{
  pinMode(pinLedAzul, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedLaranja, OUTPUT);
  
  Serial.begin(9600);
  
  int valor = 0;
  

  switch (valor)
{
    case  0:
    Serial.println ("pessima[0]"); 
  digitalWrite(pinLedAzul, HIGH);
    break;
  
    case 1:
    Serial.println ("ruim[1]");
  digitalWrite(pinLedAmarelo, HIGH);
    break;
  
    case  2:
    Serial.println ("normal[2]"); 
  digitalWrite(pinLedVermelho, HIGH);
    break;
  
    case  3:
    Serial.println ("boa[3]"); 
  digitalWrite(pinLedVerde, HIGH);
    break;
  
    case  4:
    Serial.println(" excelente [4]");
  digitalWrite(pinLedLaranja, HIGH); 
    break;
  
    default:
    Serial.println("invalido");
  digitalWrite(pinLedAzul, LOW);
  digitalWrite(pinLedAmarelo, LOW);
  digitalWrite(pinLedVermelho, LOW);
  digitalWrite(pinLedVerde, LOW);
  digitalWrite(pinLedLaranja, LOW);
    break;
  }
}

void loop()
{

}




