// Inclui a biblioteca do sensor ultrassônico
#include "Ultrasonic.h"

// Define os pinos usados para o Trigger e Echo do sensor
int pinoTrigger = 12;
int pinoEcho = 13;

// Inicializa o sensor ultrassônico nos pinos definidos
HC_SR04 sensor(pinoTrigger, pinoEcho);

void setup() {
  // Inicia a comunicação serial para exibir os dados no monitor serial
  Serial.begin(9600);
}

void loop() {
  // Mede a distância detectada pelo sensor em centímetros
  float distancia = sensor.distance();

  // Verifica se há um objeto a menos de 1.5 m do sensor
  if (distancia > 0 && distancia < 150){
    Serial.println(1);  // Exibe "Tem objeto" se estiver dentro do limite
  } else {
    Serial.println(0);  // Caso contrário, exibe "Não tem objeto"
  }

  // Aguarda 5 segundo antes de fazer a próxima medição
  delay(3000);
}
