#include <stdio.h>

/* Nomin de profesores.

I: variable de tipo entero.
SAL, NOM y PRO:variables de tipo real. */

void main (void)
{
    int I = 0;
    float SAL, PRO, NOM = 0;
    printf("Ingrese el salario del profesor:\t");
    scanf("%f", &SAL);
    do
    {
        NOM = NOM + SAL;
        I = I + 1;
        printf("Ingrese el salario delprofesor -0 para terminar- :\t");
        scanf("%f", &SAL);

    }
    while (SAL);
    PRO = NOM / I;
    printf("\nNomina: %.2f \t promedio de salarios: %.2f", NOM, PRO);
}
