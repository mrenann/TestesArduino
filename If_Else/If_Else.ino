#define pinVermelho 9
#define pinBranco 10
#define pinVerde 8

#define pinPedestreVermelho 2
#define pinPedestreBranco 3

#define pinBotao 7

int faseSemaforo;
int estadoBotao;
int estadoAnteriorBotao;

int tempoPisca;
int estadoPisca;

// Preparação do Arduino, este código irá rodar uma única vez
void setup() 
{
  // Colocamos o pino 7 do Arduino como OUTPUT (saída
  pinMode(pinBranco,OUTPUT);
  pinMode(pinVermelho,OUTPUT);
  pinMode(pinVerde,OUTPUT);

  pinMode(pinPedestreBranco,OUTPUT);
  pinMode(pinPedestreVermelho,OUTPUT);
  
  pinMode(pinBotao,INPUT);

  faseSemaforo = 1;

  estadoAnteriorBotao = digitalRead(pinBotao);

  tempoPisca = 0;
  estadoPisca = HIGH;
}

// Este código é chamado automáticamente pelo Arduino, ficará em
// loop até que seu Arduino seja desligado
void loop() {

  estadoBotao = digitalRead(pinBotao);

  if ((estadoBotao == LOW) && (estadoAnteriorBotao == HIGH)){
      if(faseSemaforo < 4){ 
        faseSemaforo = faseSemaforo + 1;
      }else{
        faseSemaforo = 1;
        }
    }

  estadoAnteriorBotao = estadoBotao;
  
  if(faseSemaforo == 1){
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinBranco, LOW);
    digitalWrite(pinVermelho, LOW);

    digitalWrite(pinPedestreBranco, LOW);
    digitalWrite(pinPedestreVermelho, HIGH);
  }
  if (faseSemaforo == 2){
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinBranco, HIGH);
    digitalWrite(pinVermelho, LOW);     

    digitalWrite(pinPedestreBranco, LOW);
    digitalWrite(pinPedestreVermelho, HIGH);
  }
  if (faseSemaforo == 3){
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinBranco, LOW);
    digitalWrite(pinVermelho, HIGH);   

    digitalWrite(pinPedestreBranco, HIGH);
    digitalWrite(pinPedestreVermelho, LOW);   
  }
  if (faseSemaforo == 4){
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinBranco, LOW);
    digitalWrite(pinVermelho, HIGH);   

    tempoPisca = tempoPisca + 1;
    if(tempoPisca == 400){
      estadoPisca = !estadoPisca;
      tempoPisca = 0;
    }
    digitalWrite(pinPedestreBranco, LOW);
    digitalWrite(pinPedestreVermelho, estadoPisca);   
  }

  
  delay(1);
}
