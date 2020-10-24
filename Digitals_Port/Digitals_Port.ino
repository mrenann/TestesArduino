// Preparação do Arduino, este código irá rodar uma única vez
void setup() 
{
  // Colocamos o pino 7 do Arduino como OUTPUT (saída)
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  pinMode(7, INPUT);

}

// Este código é chamado automáticamente pelo Arduino, ficará em
// loop até que seu Arduino seja desligado
void loop() 
{

  int estadoBotao;

  estadoBotao = digitalRead(7);
  // Ativamos o pino 7 (colocando 5v nele)  
  digitalWrite(2, !estadoBotao);
  digitalWrite(3, estadoBotao);


}
