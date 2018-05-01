int main(){
    double decimales[] = { 1.1, 2.2, 3.3 };
    int enteros[] = { 2, 8, 16, 32, 64};

    printf("sizeof(decimales): %d\n", sizeof(decimales));
    printf("sizeof(enteros): %d\n", sizeof(enteros));

    printf("sizeof(double): %d\n", sizeof(double));
    printf("sizeof(int): %d\n", sizeof(int));

    return 0;
}
//1.	Predecir el/los valores que imprimirá printf.
//      24
//      20
//      8
//      4

//2.	Porqué el valor del sizeof es tal?
//      Porque esta en scope en el que se declara el array, por lo tanto sabe la cantidad de elempentos con los que fue creado y puede hacer sizeof(double)*3

//3.	Cuantos elementos tiene el array decimales?
//      3

//4.	Cuantos elementos tiene el array enteros?
//      5

//5.	Cuál es el tamaño de un float?
//      4

//6.	Cuál es el tamaño de un int?
//      4

//7.	Qué relación existe entre el tamaño del array y el tamaño del tipo de dato?
//      el tama;o del array es igual a la cantidad de elementos multiplicada por el tamaño en memoria del tipo de dato
