#define TAMANO_DESTINO  1 /* modificar de ser necesario */
int main()
{
    int origen[] = { 1,2,3,4,5,6,7,8 };
    int destino[TAMANO_DESTINO];
    int origenf[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8 };
    int destinof[TAMANO_DESTINO];

    copiar_enteros(destino, origen, /* ... */);
    copiar_flotantes(destinof, origenf, /* ... */);
}

//1.	Generar una función que copie el contenido de un array de enteros a otro.
//2.	Que debemos tener en cuenta al momento de realizar la copia?
//3.	Generar una función que copie el contenido de un array de flotantes a otro.
//4.	Puedo realizar una copia desde el array de enteros al de flotantes (utilizando estas funciones)?
//5.	Que desventajas tiene este código? Se puede mejorar? Cómo (no es necesario hacerlo)?
