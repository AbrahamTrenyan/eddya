// b) Carga una matriz de nxn elementos enteros. Mostrarla.
// Calcular la suma de los elementos impares de la
// diagonal principal en forma recursiva.

/*
 i   0 1 2  => j

 0   1 2 3
 1   4 5 6
 2   7 8 9

*/

#include <stdio.h>
//                        3      3
int calcularMasAMenos(int i, int j, int matriz[][3])
{
    // Caso Base
    if ((i - 1) == 0)
    {
        if (matriz[i - 1][j - 1] % 2 == 0)
            return 0;
        else
            return matriz[i - 1][j - 1];
    }
    else
    {
        if (matriz[i - 1][j - 1] % 2 == 0)
        {
            return 0 + calcularMasAMenos(i - 1, j - 1, matriz);
        }
        else
        {
            return matriz[i - 1][j - 1] + calcularMasAMenos(i - 1, j - 1, matriz);
        }
    }
}

//                        0      0
int calcularMenosAMas(int i, int j, int matriz[][3])
{
    // Caso Base
    if (i == 2)
    {
        if (matriz[i][j] % 2 == 0)
            return 0;
        else
            return matriz[i][j];
    }
    else
    {
        if (matriz[i][j] % 2 == 0)
        {
            return 0 + calcularMenosAMas(i + 1, j + 1, matriz);
        }
        else
        {
            return matriz[i][j] + calcularMenosAMas(i + 1, j + 1, matriz);
        }
    }
}

int main()
{
    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("CalcularMasAMenos: %d\n", calcularMasAMenos(3, 3, matriz));
    printf("CalcularMenosAMas: %d\n", calcularMenosAMas(0, 0, matriz));

    return 0;
}