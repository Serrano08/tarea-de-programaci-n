#include <stdio.h>

const int MAX=100;

void Lectura (int, int);
int Buscar(int *, int, int);

void main (void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);
    Lectura(VEC, TAM);
    printf("\nIngrese ele elemento a buscar:");
    scanf("%d", &ELE);
    RES = Buscar(VEC, TAM, ELE);

    if (RES)

    printf("\nEl elemento no se encuentra en el arreglo");

}
  void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}
int busca(int A[], int T, int E)
{
    int RES, I = 0, BAN = 0;
    while ((I < T) && (E >= A[I]) && !BAN)
        if (A[I] == E)
              BAN++;
    else
              I++;
    if (BAN)
        RES = I + 1;
    else
        RES = BAN;
    return (RES);
}
