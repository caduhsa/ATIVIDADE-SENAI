/*
Nome do Arquivo:𝗘𝘅𝗲𝗿𝗰𝗶𝗰𝗶𝗼𝘀
Autor:CAH
Data:26/02/2025
Descricao:.....
*/
float  peso= 78;
float  altura= 1.75;
float resultadoReal = 0;


void setup()
{
  Serial.begin(9600); 
  resultadoReal = peso / sq(altura);
  Serial.println(resultadoReal);
  
 
 
  if( resultadoReal >= 40){
  Serial.println ("Obesidade |||"); 
   
   }else if( resultadoReal <= 35.0 && resultadoReal > 39.9){
  Serial.println ("Obesidade ||"); 
   
   }else if( resultadoReal <= 30.0 && resultadoReal > 34.9){
  Serial.println ("Obesidade |"); 
   
   }else if( resultadoReal <= 25.0 && resultadoReal > 29.9){
  Serial.println ("Excesso de Peso"); 
   
   }else if( resultadoReal <= 18.5 && resultadoReal > 24.9){
  Serial.println ("Peso Normal"); 
  
    }else{
    Serial.println("Abaixo do peso normal");
  
  }
  
}

void loop()
{
  
  
}