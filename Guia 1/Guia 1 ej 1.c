// Ejercicio 1 - Tipos en C

#include <stdio.h>

int main(int argc, char** argv) {
  int entero;
  unsigned enteroSinSigno;
  long int enteroLargo;
  long unsigned enteroLargoSinSigno;
  float decimalSimple;
  double decimalDoblePrecision;

  printf("Tamañano de un entero con sign:               %lu\n", sizeof(entero) );
  printf("Tamañano de un entero sin sign:           %lu\n", sizeof(enteroSinSigno) );
  printf("Tamañano de un entero largo con sign:         %lu\n", sizeof(enteroLargo) );
  printf("Tamañano de un entero largo sin sign:         %lu\n", sizeof(enteroLargoSinSigno ) );
  printf("Tamañano de un flotante:                      %lu\n", sizeof(decimalSimple) );
  printf("Tamañano de un double:                        %lu\n", sizeof(decimalDoblePrecision) );
}

// 1.	Qué salida producirán los printfs anteriores?
// Tamañano de un entero con sign:               4
// Tamañano de un entero sin sign:           4
// Tamañano de un entero largo con sign:         8
// Tamañano de un entero largo sin sign:         8
// Tamañano de un flotante:                      4
// Tamañano de un double:   

// 2.	Cuanta memoria ocupará un conjunto de 10 elementos para cada uno de los tipos anteriores?
// Entero con sign 40 bytes
// Entero sin sign 40 bytes
// Entero largo con sign 80 bytes
// Entero largo sin sign 80 bytes
// Flotante 40 bytes
// Double 80 bytes
