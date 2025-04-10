#include <Arduino.h>

/*--------------------------------------------------------------*/
/*                     AULA SOBRE STRING S                      */
/*--------------------------------------------------------------*/

//* FORMAS DE ESCREVER PALAVRAS EM C

char palavra[10] = "OLA MUNDO";
char palavra2[10] = {'O','L','A', ' ', 'M','U','N','D','O', '\0'};

String palavra3 = "HOJE eh QUINTA";

void setup()
{
  Serial.begin(9600);
  Serial.println();

  Serial.println(palavra);
    Serial.println(palavra2);


strcpy(palavra,"SENAI");

if(strcmp(palavra,"SENAI") == 0)//SE FOR IGUAL RETORNA ZERO
{
  Serial.println("SAO IGUAIS");
}
if(strncmp(palavra2,"OLA", 3) == 0)//SE FOR IGUAL RETORNA ZERO
{
  Serial.println("As primeiras letras da palavra e OLA");
}
if(strstr (palavra2,"MUNDO"))
{
  Serial.println("Palavra MUNDO detectada");
  
}
//**-------------------------------------------------------------------

Serial.println(palavra3.length());//Retorna o numero de letras do objeto da classe String

Serial.println(palavra3.charAt(10));//Retorna a oitava posicao da palavra

Serial.println(palavra3.substring(8, 13));//Retorna a 8৹ ate a 14৹ posicao

Serial.println(palavra3.indexOf("U"));//Retorna a posicao da primeira ocorrencia da letra procurada

Serial.println(palavra3.lastIndexOf("E"));//Retorna a posicao da ultima ocorrencia da letra procurada

if(palavra3.equals("HOJE EH QUINTA") == 1)//Retorna verdadeiro se forem iguais
Serial.println("Sao iguais");

if(palavra3.equalsIgnoreCase("hoje eh quinta") == 1)//Retorna verdadeiro se forem iguais ignorando letras maiusculas/minusculas
Serial.println("Sao iguais");

if(palavra3.startsWith("HOJE") == 1)//Retorna verdadeiro se a palavra comecar com determinado texto
Serial.println("Comeca com HOJE");

if(palavra3.startsWith("INTA") == 1)//Retorna verdadeiro se a palavra terminar com determinado texto
Serial.println("Termina com INTA");

String valor = "123";
int valorNumerico = valor.toInt();//Converte o valor do texto em valor numerico de "123" para 123 (numero)

String valor2 = "123";
float valorNumerico2 = valor2.toFloat();


//*EXEMPLO : transforme o numero do texto em valor numerico do tipo inteiro



String mensagem = "Valor = 50৹";

 int tamanho = mensagem.length();//MEDIR O TAMANHO DO TEXTO

String extracao = mensagem.substring(8, tamanho);//EXTRAIR  O NUMERO INICIANDO EM UMA POSICAO ATE O FIM DO TEXTO

Serial.println(tamanho);
Serial.println(extracao);


 int numero = extracao.toInt();//TRANSFORME O CONTEUDO EXTRAIDO EM UM NUMERO INTEIRO
Serial.println(numero * 2);// UTILIZE O NUMERO SEM MODERACAO..... HAHAHA

//! CONTINUANDO  
palavra3.toLowerCase();//Alterar todas as letras para Minusculas
Serial.println(palavra3);
palavra3.toUpperCase(); //Alterar todas as letras para Maiusculas
Serial.println(palavra3);

String textoLed = "Led = ON";
Serial.println(textoLed);
textoLed.replace("ON"  , "OFF");//substitui uma palavra no texto por outra
Serial.println(textoLed);//"Led = OFF";

String novaFrase  = "Texto      ";//varios espaços
novaFrase.trim(); // Remove os espaços do fim do texto

novaFrase.concat("adicionado");//Adiciona um texto a string
Serial.println(novaFrase);
}

void loop()
{ 

}
