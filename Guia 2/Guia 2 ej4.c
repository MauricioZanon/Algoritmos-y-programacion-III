#include "stdio.h"
int main(){
    int enteros[] = { 2, 8, 16, 32, 64};

    printf( enteros[0] );
    printf( enteros[4] );
    printf( enteros[5] );
    enteros[5] = 9;

    return 0;
}

//1.	Predecir el/los valores que imprimirá printf.
//      2
//      64
//      no se sabe porque sale del array

//2.	Cuantos elementos contiene el array?
//      5

//3.	Que estamos haciendo cuando cambiamos el valor del elemento 6?
//      estamos cambiando el valor de una parte de la memoria a la que no tenemos acceso

//4.	Podemos hacer lo que estamos haciendo en el punto 3? Porqué?
//      No, porque no se nos otorgo acceso a esa parte de la memoria, por lo tanto podria estar siendo usada por otro programa
