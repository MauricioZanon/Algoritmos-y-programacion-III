//Crear un procedimiento para copiar el contenido de un array a otro. Es importante el tipo?
//int main(int argc, char** argv) {
//    int enteros_src[1024];
//    // int enteros_dst
//    copiar(enteros_dst, enteros_src, ...);
//}

#include <stdio.h>
#include <string.h>

void copiarArray(void* array1, void* array2, unsigned size){
	memcpy(array2, array1, size);
}

int main(){
	int array1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int array2[10];

	copiarArray(&array1, &array2, sizeof(array1));

	for(unsigned i = 0; i < 10; i++){
		printf("%d\n", array2[i]);
	}
}
