/*
Nome do Arquivo:Potenciometro
Autor:CAH
Data:14/03/2025 
Descricao:.....
*/
void setup()
{
Serial.begin (9600);
}

void loop()
{
  int valor = analogRead(A0);
 // Serial.println(valor);
  //int resultado = map (valor, 0, 1023, 0, 100);
    //Serial.println(resultado);
  if (valor <=200){
  Serial.println("Muito frio");
  }
  
 else if(valor <=400){
     Serial.println("Frio");
  }
  
  else if(valor <=600){
     Serial.println("Normal");
  }
   else if(valor <=800){
     Serial.println("Quente");
  }
  else{
     Serial.println("Muito Quente");
  }
}