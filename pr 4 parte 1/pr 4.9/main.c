#include <stdio.h>

int suma(int X, int Y)
{
  return (X+Y);
}

int Resta(int X, int Y)
{
    return (X-Y);

}

int control(int (*apf)(int, int), int X, int Y)
{
 int RES;
 RES = (*apf) (X, Y);
 return (RES);
}

void main (void)
{
    int R1, R2;
    R1 = control(suma, 15, 5); /*Se pasa como parametro la funcion Sunma. */
    R2 = control(Resta, 10, 4);/*Se pasa como parametro la funcion Resta. */
    printf("\nResultado 1: %d", R1);
    printf("\nResultado 2: %d", R2);

}
