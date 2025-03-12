/*
Nome do Arquivo:Contagem de clicks no botao
Autor:CAH
Data:12/03/2025
Descricao:.....
*/


#define Botao 10
#define led 2
int estadoAnterior = 0; // Estado anterior do botão
int estadoBotao = 0;        // Contador de cliques
int estadoLed = 0;

void setup() {
   
    pinMode(Botao, INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
 
    int estadoAtual = digitalRead(Botao);
  if (estadoAtual == 1 && estadoAnterior == 0){
        
    estadoLed = !estadoLed;
    digitalWrite(led,estadoLed);
    }
    estadoAnterior = estadoAtual;
}