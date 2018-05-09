//Definir y declarar una función que dado dos arrays realice a concatenación de ambos y devuelva la concatenación.
//Implementar esta función para dos tipos distintos al menos. Se repite el código? Cómo podemos evitarlo?

#include "stdlib.h"
#include "string.h"
#include "stdio.h"

void concatenarArrays(void* array1, void* array2, unsigned size1, unsigned size2, unsigned elemSize, void* destination){
    for(unsigned i = 0; i < size1/elemSize; i++){
        memcpy(destination + (i*elemSize), array1 + (i*elemSize), elemSize);
    }

    for(unsigned i = 0; i < size2*elemSize; i++){
        memcpy(destination + size1 + (i*elemSize), array2 + (i*elemSize), elemSize);
    }
}

int main(int argc, char** argv){

    int enteros1[] = {0, 1, 2, 3, 4};
    int enteros2[] = {5, 6, 7, 8, 9};
    int enteros[(sizeof(enteros1) + sizeof(enteros2)) / sizeof(int)];

    concatenarArrays(enteros1, enteros2, sizeof(enteros1), sizeof(enteros2), sizeof(int), enteros);
    for(unsigned i = 0; i < sizeof(enteros) / sizeof(int); i++){
        printf("enteros[%d] %d\n",i ,enteros[i]);
    }

    char chars1[] = {'a', 'b', 'c', 'd', 'e'};
    char chars2[] = {'f', 'g', 'h', 'i', 'j'};
    char chars[(sizeof(chars1) + sizeof(chars2)) / sizeof(char)];

    concatenarArrays(chars1, chars2, sizeof(chars1), sizeof(chars2), sizeof(char), chars);
    for(unsigned i = 0; i < sizeof(chars) / sizeof(char); i++){
        printf("chars[%d] %c\n",i ,chars[i]);
    }


}
