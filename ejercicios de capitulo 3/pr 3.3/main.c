#include <stdio.h>

/*Suma pagos.

PAG y SPA: variables de tipo real. */

void main (void)
{
    float PAG, SPA;
    SPA = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);
    while (PAG)

    {
        SPA = SPA + PAG;
        printf("Ingrse el siguiente pago:\t ");
        scanf("%f", &PAG);
    }
    printf("\nEl total de pagos del mes es: %.2f" , SPA);
}
