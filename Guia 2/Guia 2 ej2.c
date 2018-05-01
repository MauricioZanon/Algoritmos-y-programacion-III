// Dado el siguiente código:
#include "stdio.h"

int main(){
    int vector[] = { 0x1, 0x2, 0x3 };
    printf("%p\n", vector);
    printf("%p\n", vector+1);
    printf("%p\n", vector-1);
    printf("%p\n", vector+200);
    printf("%p\n", &vector[2] - &vector[0]);
}

// 1.	Cuál es el resultado de la siguiente operación: vector + 1? Es la suma algebraica?
// 		El resultado seria &vector + sizeof(int) * 1, es aritmetica de punteros

// 2.	Cuál es el resultado de la siguiente operación: vector - 1? Es la resta algebraica?
// 		El resultado seria &vector - sizeof(int) * 1, es aritmetica de punteros

// 3.	Cuál es el resultado de la siguiente operación: vector + 200? Puedo hacer esta operación? Porqué?
//      La operacion puede hacerse porque solo se esta apuntando a otra direccion de memoria, pero el nuevo puntero no es valido ya que no se nos asigno esa memoria

// 4.	Cuál es el resultado de la siguiente operación: &vector[2] - &vector[0]? Puedo hacer esta operación? Porqué?
//      Da como resultado el indice en el array del primer puntero, puede hacerse porque siempre apuntaria a un lugar dentro del array
