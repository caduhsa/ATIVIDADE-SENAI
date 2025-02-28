/*
Nome do Arquivo:𝗘𝘀𝘁𝗿𝘂𝘁𝘂𝗿𝗮𝘀 𝗱𝗲 𝗗𝗲𝗰𝗶𝘀𝗮𝗼
Autor:CAH
Data:28/02/2025
Descricao:.....
*/
//**EXERCICIO 1***
int temperatura = 45;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  
  
   //EXERCICIO 4 
  int numero = 1;
  
  if(numero > 0){
    Serial.println("Positivo");
  }
   if(numero < 0){
    Serial.println("Negativo"); 
  }
  
}
void loop()
{
if ( temperatura > 30)
  {
   digitalWrite(13, HIGH);
}
  
  //EXERCICIO 2
  int bateria = 10;
  if (bateria < 20)
  {
    digitalWrite(12,HIGH);
  }
 
  //EXERCICIO 3 
  int numere = 4;
  int resultado2 = numere%2;
  
  if(resultado2 == 0){
    digitalWrite(9,HIGH);
  }
   
  
}


