//Dado el siguiente código:

#include "stdio.h"

int suma(int a, int b) {
  return a + b;
}

int resta(int a, int b) {
  return a - b;
}

int producto(int a, int b){
    return a * b;
}

int main() {
  int (*f)(int, int) = &producto;

  printf("producto: %d\n", (*f)(9, 9));
}

//1.	De que tipo es la variable f?
//          f es el puntero a una funcion que toma dos enteros como parametro y devuelve otro entero

//2.	Modificar el programa para que imprima el producto de 9 y 9.
