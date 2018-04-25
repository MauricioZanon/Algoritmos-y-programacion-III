// Ejercicio 2
// Dado el siguiente código:

int main(){
    float auro = 1.6180;
    int primo = 999631;
    float* pf;
    int* pi;

    void* pv = 0x0;

    pf = &auro;
    pi = &primo;

    pv = pf;
    pv = pi;

    auro = primo;
    printf("auro %f\n",auro);
    printf("*pf %f", *pf);
}

// 1.	Son válidos los punteros declarados? Cuáles? Porqué?
//  Si, a pf se le asigna la direccion en memoria de un float y a pi el de un entero, por lo tanto son validos

// 2.	Contienen valores numéricos los punteros? Cuáles son sus valores?
//  Contienen la direccion en memoria de la variable que referencian, es un valor numerico hexadecimal

// 3.	Que dato contiene pv en la linea 09? Puedo derreferenciarlo? Porqué?
//  pv contiene la direccion 0x0, no puede derreferenciarse porque esta direccion es equivalente a null

// 4.	Que dato contiene pv en la linea 14 y 15? Puedo derreferenciarlo? Porqué?
//  pv contiene el valor de pf y despues el de pi, no se puede derreferenciar porque los valores de pf y pi no son validos como punteros, ademas de que no se puede derreferenciar por ser un puntero a void

// 5.	Puedo asignar primo = auro? Cuanto valdrá primo? Y *pi?
//  Si, se puede, primo valdra 1 y *pi tambien

// 6.	Puedo asignar auro = primo? Cuanto valdrá primo? Y *pf?
//  Si, se puede, auro va a valer999631 y *pf 999631
