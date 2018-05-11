//NOTA: Hacer diagrama de la memoria.
//Se busca implementar la funcionalidad "Replace All" de un editor. Para eso se tiene un vector de strings (p�rrafo),
//la palabra a reemplazar y la palabra reemplazo. Confeccionar una funci�n o procedimiento que dado el p�rrafo realice el reemplazo. Liberar todos los recursos que se hayan alocado.

#include "stdio.h"
#include "string.h"

int main() {
  char* parrafo[] = {
    "Diego Capusoto",
    "es",
    "es",
    "uno",
    "de",
    "los",
    "humoristas",
    "m�s",
    "grandes",
    "grandes",
    "de",
    "Arg"
  };

  // Reemplazar, 'es' por 'eeeeeeeeeeees' y 'grandes' por 'fenomeno'

  unsigned parrafoElems = sizeof(parrafo) / sizeof(char*);

  for(unsigned i = 0; i < parrafoElems; i++){
    if(strcmp(parrafo[i], "es") == 0){
        parrafo[i] = "eeeeeeeeeeees";
    }
    else if(strcmp(parrafo[i], "grandes") == 0){
        parrafo[i] = "fenomeno";
    }

    printf("%s ", parrafo[i]);
  }



}
