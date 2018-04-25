// Ejercicio 3
// NOTA: Este ejercicio está pensado para que lo hagan utilizando papel y lapiz


 int main() {
    int enteros[] = { 1, 2, 3, 4, 7, 78, 174 };
    int simple = 32;
    int radio = 4;
    int* p;
    int* q;
    int* r;
    
    p = enteros + 6;
    q = &simple;
    r = q;
    
    *r = 115;
    
    r = &radio;
    
    *p = radio;
    
    p = r;
    q = enteros;
    
    *(q+ 4) = 0;
    *p = 0;
    
    r = q + 1;
    
    q - r;
  
    p = enteros + 3;
    
    q - p;
    return 0;
}

// 1.	Hacer un esquema de memoria con el mayor detalle posible para realizar el seguiento del programa. Considerar que la primera dirección del proceso es 0xff00.

// 2.	Cuál es el valor de p, q y r en la linea 5, 6 y 7?
//  Ninguno de los tres esta inicializado

// 3.	Cuál es el valor de p, q y r en la linea 9, 10 y 11? Que significa?
//  p = 0xff06, q = 0xff1b y r 0xff1b

// 4.	Qué valor tiene 'simple' luego de que se ejecuto la linea 13?
//  115

// 5.	Qué valor tiene *p y *q luego de que se ejecuto la linea 13?
//  p sigue con el mismo valor, q vale 115

// 6.	Se modifico el array enteros luego de que se ejecutó la linea 17?
//  Si, parte del array se reemplazo por el valor de radio

// 7.	Se volvió a modificar el array enteros luego de que se ejecutaron las lineas hasta 20?
// 	En la linea 22 se reemplazo parte del array por 0

// 8.	Algun elemento del array es 0 luego de ejecutar la linea 22?
//	Si, el 7

// 9.	Y luego de ejecutar la linea 25?
//	No

// 10.	Porqué la suma de los punteros de la linea 25 toma ese valor?
// 11.	Porqué la resta de los punteros de la linea 27 toma ese valor? Cuanto vale?
// 12.	Porqué la resta de los punteros de la linea 31 toma ese valor? Cuanto vale?
