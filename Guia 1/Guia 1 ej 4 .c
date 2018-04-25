// Ejercicio 5 - Punteros y sus posibles valores
01 int main(int argc, char** argv) {
02   char vector[] = { 0x9, 32, 25, 010 /* octal */, 200, 09 };
03
04   char* p = 0;
05   char* q = 0x0;
06 
07   if ( p == q ) {
08     printf("q y p son iguales\n");
09   }
10
11   p = vector + 0x6;
12   q = vector;
13
14   p = vector + 5;
15
16   if ( p == q ) {
17     printf("q y p son iguales\n");
18   }
19
20  char* r = vector + 10;
21  printf("%\n", *r);
22
23  return 0;
24 }
// 1.	Cuál es la diferencia entre p y q?
// 2.	Se imprime la leyenda q y p son iguales?
// 3.	Cuanto vale p luego de ejecutar la linea 11? Es válido el puntero?
// 4.	Cuanto vale q luego de ejecutar la linea 12? Es válido el puntero?
// 5.	Se imprime la leyenda * *p es igual a *q*?
// 6.	Qué imprimirá la linea 21? Funciona?
