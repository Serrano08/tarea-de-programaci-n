#include <stdio.h>

/* Cubo-2


/* Cubo(void);          /*prototipo de funcion. */
int I;                  /* variable global. */

void main (void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();    /* Llamada a la funcion cubo. */
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}
int cubo(void)            /*declaracion de la funcion. */
/* La funicon calcula el cubo de la variable local I. */
{
    int I = 2;     /* variable local entera I con el mismo nombre
    que la variable global. */
    return (I*I*I);



}
