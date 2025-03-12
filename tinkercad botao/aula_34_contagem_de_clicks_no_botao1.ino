/*
Nome do Arquivo:Contagem de clicks no botao
Autor:CAH
Data:12/03/2025
Descricao:.....
*/


#define Botao 10

int estadoAnterior = HIGH; // Estado anterior do botão
int estadoBotao = 0;        // Contador de cliques
unsigned long intervalo = 0; // Controle de tempo para evitar repetições rápidas

void setup() {
    Serial.begin(9600);
    pinMode(Botao, INPUT);
}

void loop() {
 
    int estadoAtual = digitalRead(Botao);
  if (estadoAtual == 1 && estadoAnterior == 0){
        estadoBotao++;
        Serial.print("Clique numero: ");
        Serial.println(estadoBotao);
     
    }
    estadoAnterior = estadoAtual;
}