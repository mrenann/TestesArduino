// Preparação do Arduino, este código irá rodar uma única vez
void setup() 
{
  // Colocamos o pino 7 do Arduino como OUTPUT (saída)
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(7, INPUT_PULLUP);

}

// Este código é chamado automáticamente pelo Arduino, ficará em
// loop até que seu Arduino seja desligado
void loop() 
{

  int estadoBotao;

  estadoBotao = digitalRead(7);
  // Ativamos o pino 7 (colocando 5v nele)  
  digitalWrite(9, !estadoBotao);
  digitalWrite(10, estadoBotao);


}
