/*
Nome do Arquivo:Matematica
Autor:CAH
Data:24/02/2025
Descricao:.....
*/

//*********DECLARACAO DE VARIAVEIS GLOBAIS*******

int  numeroA = 600;
int  numeroB = 0;
int resultado = 0;  

void setup()
{
 Serial.begin(9600); 
     
  
  //EXERCICIO 1 
  
  
  //****REMAPEAMENTO****
  
  resultado = map(600, 0, 1023, 0, 100);
  Serial.println(resultado); 
  
  //****RESTRICAO****
  resultado = constrain(resultado, 20, 80);
  Serial.println(resultado);
  
  //EXERCICIO 2
 
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  Serial.println(numeroB++);
  
  
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
  Serial.println(numeroB--);
 
 
  // EXERCICIO 3
int valorA = 20;
int valorB = 15;
float resultadoReal = 0;
resultadoReal= ((float)valorA + (float)valorB) /2;
Serial.println (resultadoReal);
  
  
}

void loop()
{
}