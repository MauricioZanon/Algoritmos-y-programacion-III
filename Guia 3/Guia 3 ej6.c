//Teniendo hecho el ejercicio anterior, utilizar como fuente de un párrafo un archivo TXT. Sacar el resultado por pantalla.

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {

   char* texto = NULL;
   // abro el archivo
   FILE* archivo = fopen("Texto.txt", "r");

   if (archivo){
       // busco el ultimo byte del archivo
       fseek(archivo, 0, SEEK_END);

       // veo el numero de byte del archivo en el que estoy parado
       unsigned tamTexto = ftell(archivo);

       // vuelvo al principio del archivo
       rewind(archivo);

       texto = (char*) malloc(sizeof(char) * (tamTexto + 1) );

       // leo el archivo
       fread(texto, sizeof(char), tamTexto, archivo);

       // agrego el \0 para poder imprimirlo como string
       texto[tamTexto] = '\0';

       // cierro el archivo
       fclose(archivo);
    }

    printf("%s\n", texto);

    free(texto);

}
