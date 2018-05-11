//Definir el TDA Dupla con la siguiente declaración teniendo en cuenta los siguientes lineamientos:
//1.	Completar la definición del TDA según resulte necesario.
//2.	Definir las siguientes primitivas del TDA sin modificar su firma (ver debajo).
//3.	Liberar todos los recursos que se hayan alocado (antes de que el programa termine su ejecución).
//4.	Escriba un main en el cual se muestre como se utiliza el TDA, creando para esto un TDA Dupla que almacene un entero y luego un double.
#ifndef DUPLA_H_INCLUDED
#define DUPLA_H_INCLUDED

typedef struct _Dupla {
    char* clave;
    void* dato;
} Dupla;

void dupla_init(Dupla* this, const char* nombre, void* dato, unsigned longitud_dato);
void dupla_liberar(Dupla* this);

/***
* Modifica la clave de la dupla
*
* @param  this: Dupla
* @param clave: La nueva clave de la dupla
*
* @return 'this' modificada (la misma que recibe)
*/
Dupla* dupla_modificar(Dupla* this, const char* dato);

/***
* Almacena un dato en la tupla
*
* @param           this: Dupla
* @param          valor: Valor que quiero almacenar
* @param longitud_valor: Longitud del valor a almacenar
*
* @return 'this' modificada (la misma que recibe)
*/
Dupla* dupla_valor(Dupla* this, void* valor, unsigned longitud_valor);

#endif // DUPLA_H_INCLUDED
