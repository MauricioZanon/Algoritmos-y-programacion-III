//Definir un array origen y un array destino y copiar el contenido de uno en otro (el siguiente código tiene una trampa).
int main()
{
    float origen[] = { 1.1, 2.2, 3.3 };
    float destino[sizeof(origen)/sizeof(float)];

    memcpy(destino, origen, sizeof(origen));

    printf("ORIGEN\n");
    for(int i = 0; i < sizeof(origen)/sizeof(float); i++){
        printf("%f\n", origen[i]);
    }

    printf("DESTINO\n");
    for(int i = 0; i < sizeof(destino)/sizeof(float); i++){
        printf("%f\n", destino[i]);
    }

    // Imprima el contenido de ambos arrays aquí

    return 0;
}
//1.	Escribir el código para solucionar este problema.
//2.	Confeccionar el gráfico de memoria
//3.	Funcionó?
//4.	Que fué lo que hicimos?
