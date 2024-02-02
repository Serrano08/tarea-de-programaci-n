#include <stdio.h>

/* inverte datos
A, B, C Y D: variables de tipo entero. */

void main(void)
{
    int A, B, C, D;
    printf("Infrese cuatro datos de tipo entero: ");
    scanf ("%d %d %d %d" , &A, &B, &C, &D);
    printf ("\n %d %d %d %d", D, C, B, A);
}
