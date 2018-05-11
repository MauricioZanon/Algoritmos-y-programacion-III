//Definir el TDA Cadena con la siguiente declaración teniendo en cuenta los siguientes lineamientos:
//1.	Completar la definición del TDA según resulte necesario.
//2.	Definir las siguientes primitivas del TDA sin modificar su firma (ver debajo).
//3.	Liberar todos los recursos que se hayan alocado (antes de que el programa termine su ejecución).
//4.	Escriba un main en el cual se muestre como se utiliza el TDA, creando para esto un TDA cadena con caracteres no imprimibles.

#ifndef CADENA_H_INCLUDED
#define CADENA_H_INCLUDED

typedef struct _Cadena {
    char* datos;
    unsigned cantidad;
} Cadena;

void cadena_init(Cadena* this, const char* dato, unsigned largo);
void cadena_liberar(Cadena* this);

/***
* Modifica la cadena de caracteres alacenada por la cadena
*
* @param cadena: El TDA cadena que voy a modificar
* @param data:   La cadena datos que utilizo para cambiar el valor
*                del TDA
*
* @return  cadena modificada (la misma que recibe)
*/
Cadena* cadena_modificar(Cadena* this, const char* dato);

/***
* Concatenar un contenido a una cadena
*
* @param cadena: El TDA cadena que voy a modificar
* @param data:   La cadena datos que utilizo para cambiar el valor
*                del TDA
*
* @return  cadena modificada (la misma que recibe)
*/
Cadena* cadena_concatenar(Cadena* this, const char* dato);

void cadena_print(Cadena* this);
#endif // CADENA_H_INCLUDED
