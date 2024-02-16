/*
   BubbleSort C
*/
#include <stdio.h>
#include <time.h>



#define ARRAY_SIZE 10



int i;
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;




int main(int argc, char* argv[])
{
  seed = 0;
  srand(time(&seed));
  n = sizeof(a) / sizeof(*a);
  for (i = 0; i <= n-1; i++)
  {
    a[i] = rand() % 1000;
  }



  for (i = 0; i <= n-1; i++) esto es un bucle de for que tiene i= 0 inicializacion, i <= n-1 condicion continuacion, y i++ actulizacion.
  {
    printf("Element a[%d]: %d\n", i, a[i]); es una instruccion de salida que imprime informacion en la consola o en la salida estandar.
  }
  change = 1; poner a uno la variable.
  while (change == 1) se ejecuta el sicro durante que la variable valga 1.
  {
    change = 0; no se necesita el bucle cuando el valor valga 0
    for (i = 0; i <= n-2; i++) en este bucle se ejecutara desde i = 0 hasta n-2.
    {
      if (a[i] > a[i+1]) en este es una estructura condicional de if que verifica si el elemento en la posicion i del array a es mayor que el elemento en la posicion i+i.
      {
        buf = a[i]; en este se iguala
        a[i] = a[i+1]; en este asignacion que esta copienado el valor del elemento.
        a[i+1] = buf; en este copiando el valor de la variable buf al elemento en la posicion i+i.
        change = 1; pone el valor 1 a la variable
      }
    }
  }
  printf("\n----------------\n"); este es para imprimir las lineas de guiones y los saltos de linea en la consola.
  for (i = 0; i <= n-1; i++) este es para ordenar de menor a mayor
  {
    printf("Element a[%d]: %d\n", i, a[i]); se imprime los elementos ordenados
  }
  return 0; fin del programa
}
