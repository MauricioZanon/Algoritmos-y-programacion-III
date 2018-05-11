#include "Guia 4 ej2 Cadena.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void cadena_init(Cadena* this, const char* dato, unsigned largo){
    this -> cantidad = largo;
    this -> datos = (char*) malloc(sizeof(char*) * largo + 1);
    strcpy(this -> datos, dato);
}

void cadena_liberar(Cadena* this){
    if(this -> datos){
        free(this -> datos);
    }
    this -> datos = 0x0;
}

Cadena* cadena_modificar(Cadena* this, const char* dato){
    cadena_liberar(this);
    this -> datos = (char*) malloc(strlen(dato));
    strcpy(this -> datos, dato);

    return this;
}

Cadena* cadena_concatenar(Cadena* this, const char* dato){
    realloc(this -> datos, strlen(this -> datos) + strlen(dato));
    strcpy(this -> datos + strlen(this -> datos), dato);
    return this;
}

void cadena_print(Cadena* this){
    printf("%s\n", this -> datos);
}

int main(){
    Cadena cad;
    cadena_init(&cad, "primera cadena", 15);
    cadena_print(&cad);

    cadena_concatenar(&cad, " concatenacion ");
    cadena_print(&cad);

    cadena_modificar(&cad, "primera cadena modificada");
    cadena_print(&cad);

    cadena_liberar(&cad);
    cadena_print(&cad);

}
