//Crear un procedimiento que reemplace una palabra por otra en un párrafo.
//int main(int argc, char** argv) {
//    char* parrafo = "este es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";
//    // ...
//}
//NOTA: pueden utilizar las primitivas de arrays.

#include "string.h"
#include "stdio.h"
#include "stdlib.h"


void reemplazarPalabra(char* parrafo, char* palabraBuscada, char* nuevaPalabra){
    unsigned nuevaSize = strlen(nuevaPalabra);
    char nuevoParrafo[1000];

    unsigned parrafoIndex = 0;
    unsigned nuevoParrafoIndex = 0;

    do{
        if(memcmp(&parrafo[parrafoIndex], palabraBuscada, nuevaSize) == 0){
            memcpy(&nuevoParrafo[nuevoParrafoIndex], nuevaPalabra, nuevaSize);
            parrafoIndex += strlen(palabraBuscada);
            nuevoParrafoIndex += nuevaSize;
        }
        else{
            memcpy(&nuevoParrafo[nuevoParrafoIndex], &parrafo[parrafoIndex], 1);
            parrafoIndex++;
            nuevoParrafoIndex++;
        }
    }while(parrafoIndex < strlen(parrafo));

    printf("nuevo parrafo: %s", nuevoParrafo);
}


int main(int argc, char** argv){
    char* parrafo = "este es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";
    char* palabraBuscada = "palabra";
    char* nuevaPalabra = "word";

    reemplazarPalabra(parrafo, palabraBuscada, nuevaPalabra);

}
