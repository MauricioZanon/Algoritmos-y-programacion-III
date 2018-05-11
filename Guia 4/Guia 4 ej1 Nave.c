#include "Guia 4 ej1 Nave.h"

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void nave_init(Nave* this, const char* nombre){

    this->vida = 100;
    strcpy(this->nombre, nombre);
}

void nave_daniar(Nave* this, int danio){
    this->vida -= danio;
}

void nave_print(Nave* this){
    printf("Nombre: %s \tVida: %d\n", this-> nombre, this -> vida);
}


int main(){

    Nave nave;
    nave_init(&nave, "nave nueva");
    nave_print(&nave);
    nave_daniar(&nave, 30);
    nave_print(&nave);


}
