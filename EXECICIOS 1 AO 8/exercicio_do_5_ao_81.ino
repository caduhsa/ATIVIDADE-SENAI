
//Exercicio 5
void setup()
{
  Serial.begin(9600); 
  Serial.println("Leticia");
  Serial.println("Faxineira");
  Serial.println("salario:");
  
 int salario = 600;
  Serial.println(salario);
 int resultado = 0;
  if ( salario < 1000){
  }
resultado = salario * 1.1;
  Serial.print(" o salario de leticia agora eh:");
  Serial.println(resultado);

    
  //Exercicio 6
  
 
  Serial.println("Funcionaria");
  Serial.print("salario: ");
    
 int salarie= 499;
    
    Serial.println(salarie);
 int resultade = 0;
  if ( salarie < 500){
  
resultade = salarie * 1.3;
  Serial.print(" o salario da funcionaria agora eh:");
  Serial.println(resultade);
  }
    //Exercicio 7
    int  valorA = 30;
    int valorB = 145;
    
    if (valorA > valorB){
      Serial.println("o maior numero eh:");
      Serial.println(valorA);
    }else{
      
     Serial.println("o maior numero eh:");
      Serial.println(valorB);
      
    } 
    
    
    //Exercicio 8
    
   int notab1 = 5;
   int notab2 = 7;
   int notab3 = 6;
   int notab4 = 8;
   int resultadoFinal = 0;
    
    resultadoFinal =(notab1 + notab2 + notab3 + notab4)/4;
    Serial.println("a media aritmetica eh:");
    Serial.println (resultadoFinal);
    
    if( resultadoFinal >= 7){
  Serial.println ("APROVADO"); 
    
       }else if( resultadoFinal >= 5){
    Serial.println ("RECUPERACAO"); 
      
      }else{
    Serial.println("REPROVADO");
    
  }
  
}

void loop()
{
 
}