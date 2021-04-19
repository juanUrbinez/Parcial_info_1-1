#include <iostream>
using namespace std;

/*
ARDUINO -> 74HC595
------------------
Puero 13 -> SER
Puero 12 -> RCLK
Puero 11 -> SRCLK
*/

const int SER = 13;
const int RCLK = 12;
const int SRCLK = 11;

int main()
{
    return 0;
}

//Funcion #1 ---- Almacena datos (1 / 0)
void CLOCK1(){
  // Para activar el reloj de la primera etapa de los registros (registros de entrada)
    digitalWrite(SRCLK, 0);
    digitalWrite(SRCLK, 1);
    digitalWrite(SRCLK, 0);
}
//Funcion #2 ---- Conecta los datos almacenados en CLOCK1 a los pines del integrado
void CLOCK2(){
 // Activación del reloj de segunda etapa de registros (registros de salida)
    digitalWrite(RCLK, 0);
    digitalWrite(RCLK, 1);
    digitalWrite(RCLK, 0);
}
void setup(){

  // configuración de puertos digitales como salida
  pinMode(SER, OUTPUT   );
  pinMode(RCLK, OUTPUT  );
  pinMode(SRCLK, OUTPUT );

  digitalWrite(SER,  0 );
  digitalWrite(RCLK, 0 );
  digitalWrite(SRCLK,0 );
 }

void loop()
{
  // Este es para llevar el dato al puerto serial del 74HC595 ( 0 / 1 )
  digitalWrite(SER, 1);
  CLOCK1();
  CLOCK2();
  delay(50);
}
