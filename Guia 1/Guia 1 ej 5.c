// Ejercicio 5 - Punteros y sus posibles valores
#include <stdio.h>

 int main(int argc, char** argv) {
   char vector[] = { 0x9, 32, 25, 010 /* octal */, 20, 9 };

   char* p = 0;
   char* q = 0x0;
 
   if ( p == q ) {
     printf("q y p son iguales\n");
   }

   p = vector + 0x6;
   q = vector;

   p = vector + 5;

   if ( p == q ) {
 	printf("q y p son iguales\n");
   }

  char* r = vector + 10;
  printf("%\n", *r);

  return 0;
 }

// 1.	Cuál es la diferencia entre p y q?
//	Ninguna

// 2.	Se imprime la leyenda q y p son iguales?
//	En el primer if si, porque 0 es lo mismo que 0x0, pero en el segundo no porque se cambiaron los valores

// 3.	Cuanto vale p luego de ejecutar la linea 11? Es válido el puntero?
//	No es valdo porque no se sabe a que apunta

// 4.	Cuanto vale q luego de ejecutar la linea 12? Es válido el puntero?
// Tiene la misma direccion que el array, es valido

// 5.	Se imprime la leyenda * *p es igual a *q*?
//
// 6.	Qué imprimirá la linea 21? Funciona?
// No se sabe que imprime porque al sumarle 10 a la direccion del array vector este se sale de rango
