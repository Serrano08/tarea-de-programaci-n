#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    double x = 0.0;
    double b = 0.0;
    int ciclos = 0;

    printf("Calculo Raiz Cuadrada!\n");
    printf("Ingrese el numero: ");
    scanf("%lf", &x);

    b = x;
    while(!(b ==(x/b)))
    {
        printf("\nCiclos para calculo: %d",ciclos);
        printf("\Raiz cuadrada de %lf es: %lf" ,x,b);
        b = 0.5 *((x/b) + b);
        ciclos++;
        if(ciclos >= 25)
        {
            break;
        }
    }
    return 0;
 }
