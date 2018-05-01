//Crear un procedimiento que perminta revertir los elementos de un array.

#include <stdio.h>

void revertir(void* array, unsigned elem, unsigned typeSize){
    for(int i = 0; i < elem/2; i++){
        void* aux = malloc(typeSize);
        void* elem1 = array + (i*typeSize);
        void* elem2 = array + (elem*typeSize) - typeSize - (i*typeSize);
        memcpy(aux, elem1, typeSize);
        memcpy(elem1, elem2, typeSize);
        memcpy(elem2, aux, typeSize);
        free(aux);
    }

}


int main(){
    int array1[] = {0,1,2,3,4,5,6,7,8};
    revertir(array1, sizeof(array1) / sizeof(int), sizeof(int));
    for(int i = 0; i < sizeof(array1) / sizeof(int); i++){
        printf("%d\n", array1[i]);
    }

    float array2[] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
    revertir(array2, sizeof(array2) / sizeof(float), sizeof(float));
    for(int i = 0; i < sizeof(array2) / sizeof(float); i++){
        printf("%f\n", array2[i]);
    }


}
