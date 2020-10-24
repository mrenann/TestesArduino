// Preparação do Arduino, este código irá rodar uma única vez
void setup() 
{
  // Colocamos o pino 7 do Arduino como OUTPUT (saída)
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

// Este código é chamado automáticamente pelo Arduino, ficará em
// loop até que seu Arduino seja desligado
void loop() 
{

  int intervalo1Pisca;
  int intervalo2Pisca;
  
  intervalo1Pisca = 100;
  intervalo2Pisca = 1000;
  
  // Ativamos o pino 7 (colocando 5v nele)  
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  
  delay(intervalo1Pisca);

  // Desligamos o pino 7
  digitalWrite(10, LOW);
digitalWrite(9, HIGH);

  delay(intervalo2Pisca);

  // Este código irá se repetir eternamente
}
