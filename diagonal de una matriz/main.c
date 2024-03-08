#include <stdio.h>


#define FILAS 3
#define COLUMNAS 3

void calcularDiagonal(int matriz[][3], int filas, int columnas)
{
    if(filas != columnas){
            printf("La matriz no es cuadrada, no tiene diagonal.\n");
            return;

    }

    printf("Diagonal de la matriz:\n");
    for(int I = 0; I< filas; ++ I){
        for (int J = 0; J < columnas ; ++J) {
            if (I == J)
            {
                printf("%d", matriz [I][J]);

            } else {
                printf("0");

            }
        }
        printf("\n");
    }

}

int main(){


    int matriz[FILAS ][COLUMNAS] ={{1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9}};

calcularDiagonal(matriz, FILAS, COLUMNAS);
return 0;

}
