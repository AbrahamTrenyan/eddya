#include <stdio.h>
#include <stdlib.h>

void GenerarMatriz(int A[][8], int filas, int cols)
{
    int i, j, num;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("ingrese nro a la posicion %d %d", i, j);
            scanf("%d", &num);
            A[i][j] = num;
        }
    }
}
void MostrarMatriz(int A[][8], int filas, int cols)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        printf("\n");
        for (j = 0; j < cols; j++)
        {
            printf("%d \t", A[i][j]);
        }
    }
}
int main()
{
    int A[10][10], filas, cols;
    printf("ingrese la cantidad de filas");
    scanf("%d", &filas);
    printf("ingrese la cantidad de columnas");
    scanf("%d", &cols);
    GenerarMatriz(A, filas, cols);
    MostrarMatriz(A, filas, cols);
}
