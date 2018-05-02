//Crear una función que encuentre un elemento en un array y si existe devuelva el subíndice dentro del array,
//de lo contrario -1. Debemos probar nuestra función utilizando arrays de enteros y de flotantes. Hay código duplicado?
//Lo podemos reducir? Cómo?


int buscarIndice(void* array, unsigned elem, unsigned elemSize, void* elemBuscado){
    for(int i = 0; i < elem; i++){
        if(memcmp(array+(i*elemSize), elemBuscado, elemSize) == 0){
            return ((array+(i*elemSize)) - array) / elemSize;
        }
    }
    return -1;
}

int main(){
    int array1[] = {0,1,2,3,4,5,6,7,8};
    int enteroBuscado = 3;
    int indiceDeEntero = buscarIndice(array1, sizeof(array1)/sizeof(int), sizeof(int), &enteroBuscado);
    printf("%d\n", indiceDeEntero);

    float array2[] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
    float floatBuscado = 3.3;
    int indiceDeFloat = buscarIndice(array2, sizeof(array2)/sizeof(float), sizeof(float), &floatBuscado);
    printf("%d\n", indiceDeFloat);
}
