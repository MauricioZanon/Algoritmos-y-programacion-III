#include <stdio.h>
void f(int param[]) {
    printf("sizeof(param): %d\n", sizeof(param) );
    param[3] = 6;
};

void g(int* param) {
    printf("sizeof(param): %d\n", sizeof(param) );
    param[6] = 6;
};


int main(){
    int array[] = { 1,2,3,4,5,6,7,8 };

    f(array);
    g(array);

    //3.	Hacer procedimiento para imprimir el array
    for(int i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("%d\n", array[i]);
    }

    // Imprimir
}

//1.	Predecir el/los valores que imprimirá printf.
//        4

//2.	Porqué el sizeof de params es tal?
//        porque solo se tiene el puntero al inicio del array

//4.	Se modifica el array en alguna de las funciones? Porque?
//        se modifica en ambas, porque no se modifica el puntero que se paso como paremetro sino el dato guardado en la memoria

//5.	Que es pasaje por valor y por referencia?


