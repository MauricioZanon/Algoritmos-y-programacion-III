//Crear una función/es que permita iterar un array de cualquier tipo (sin repetir código) y elemento a elemento imprima cada uno de sus elementos.

#include "stdio.h"

void imprimirEntero(void* enteroPtr){
    printf("%d\n", *(int*)enteroPtr);
}

void imprimirDecimal(void* decimalPtr){
    printf("%l\n", *(double*)decimalPtr);
}

void iterador(void* array, unsigned elemSize, unsigned arrayLength, void (*printFuncPtr)(void*)){
    for(unsigned i = 0; i < arrayLength; i++){
        (*printFuncPtr)(array + i*elemSize);
    }
}

int main(int argc, char** argv) {
    int enteros[] = { 1, 2, 3};
    double decimales[] = { 1.1, 2.2, 3.3 };

    iterador(enteros, sizeof(int), sizeof(enteros) / sizeof(int), &imprimirEntero);
    iterador(decimales, sizeof(double), sizeof(decimales) / sizeof(double), &imprimirDecimal);
}
