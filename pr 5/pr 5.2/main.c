#include <stdio.h>

void main(void)
{
    int ELE[5] = {0};
    int I, VOT;
    printf("Ingrese el primer voto(0 - para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) &&(VOT < 6))
        ELE[VOT-1]++;
     else
         printf("\nEl voto ingresado es incorrecto.\n");
         scanf("%d", &VOT);
    }
    printf("\n\nResultados de la Eleccion\n");
    for (I = 0; I <= 4; I++)
    printf("\nCandidato %d", I+1, ELE[I]);
}
