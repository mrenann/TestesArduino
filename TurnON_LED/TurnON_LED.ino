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

  int intervaloPisca;
  intervaloPisca = 200;
  // Ativamos o pino 7 (colocando 5v nele)  
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  

  // Aguardamos 1 segundo
  delay(200);

  // Desligamos o pino 7
  digitalWrite(10, LOW);
digitalWrite(9, HIGH);
  // Aguardamos mais um segundo
  delay(150);

  // Este código irá se repetir eternamente
}
