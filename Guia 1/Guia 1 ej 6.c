// Ejercicio 6 - Procedimiento intercambio
// Crear un procedimiento para dado dos valores del mismo tipo sus valores sean intercambien.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void* a, void* b, unsigned const sizeDelValor){
	void* aux = malloc(sizeDelValor);
	memcpy(aux, a, sizeDelValor);
	memcpy(a, b, sizeDelValor);
	memcpy(b, aux, sizeDelValor);
	free(aux);
}


int main(){
	int a = 4;
	int b = 5;

	printf("Antes del swap:\t\t a = %d  \tb = %d\n", a, b);

	swap(&a, &b, sizeof(a));

	printf("Despues del swap:\t a = %d  \tb = %d\n", a, b);

}