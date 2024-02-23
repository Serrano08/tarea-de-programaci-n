#include <stdio.h>
/* Cubo-1.

int cubo(void);   /* prototipo de funcion. */
int I;            /* variable global. */

void main (void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();         /*Llamada a la funcion cubo. */
        fprintf("\nEl cubo de %d es: %d", I, CUB);
    }
}
int cubo (void)    /*Declaracion de la fundacion. */
/* La funcion calcula el cubo de la variedad global I. */
{
    return (I*I*I);
}
