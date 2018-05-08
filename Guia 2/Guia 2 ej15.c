#include <stdio.h>
#include <string.h>

char* proximo(char* str) {
    char* aux = str;

    while(*aux != ' ' && *aux != '\0') {
        ++aux;
    }
    return str + (aux - str);
}

unsigned ocurrencias(char* parrafo, const char* busqueda, char** result, unsigned tam) {
    char* prox = parrafo;
    unsigned insertionIndex = 0;

    while (*prox != 0x0 && tam != 0x0) {
        if ( strncmp(prox+1, busqueda, strlen(busqueda)) == 0x0 ) {
            result[insertionIndex] = prox;
            --tam;
            ++insertionIndex;
        }
        prox = proximo(prox + 1);
    }

    return insertionIndex;
}

int main(int argc, char** argv) {
    char* parrafo = "este es un parrafo donde buscamos esta palabra a ver si aparece o no la palabra palabra";
    char* result[5];
    unsigned count = sizeof(result) / sizeof(char*);

    count = ocurrencias(parrafo, "palabra", result, count);

    for(unsigned i = 0; i < count; ++i) {
        printf("%u - %p - %p: %s\n", i, parrafo, result + i, result[i]);
    }
}

