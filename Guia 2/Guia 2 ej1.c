// Ejercicio 1
// Dado el siguiente código:
int main(){
    int i = 29;
    int j = 50;
    char vector[] = { 0x1, 0x2, 0x3 };
}


// 1.	Cuál es la dirección de i?
// 		&i

// 2.	Cuál es la dirección de j?
// 		&j

// 3.	Cuál es la dirección de vector?
// 		&vector

// 4.	Cuál es la dirección de vector[0]?
//		&vector + (sizeof(char) * 0) 	

// 5.	Cuál es la dirección de vector[1]?
// 		&vector + (sizeof(char) * 1) 	

// 6.	Observa alguna relación entre estos valores?
// 		La direccion de cada elemento dentro de vector esta ubicada en una posicion de memoria que se obtiene sumandole sizeof(tipo del array) * indice al puntero del array

