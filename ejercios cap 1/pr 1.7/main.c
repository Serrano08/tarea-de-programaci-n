#include <stdio.h>

/* Medidas.
PIE, LIB, MET y KIL: variables de tipo real. */

void main (void)
{
    float PIE, LIB, MET,KIL;
    printf("Ingrese los datos del objetivo: ");
    scanf("%f %f", &PIE, &LIB);
    MET = PIE * 0.09290;
    KIL = LIB * 0.45359;
    printf("\nDatos del objeto \nlogitud: %5.2f \t Peso: %5.2f", MET , KIL);

}
