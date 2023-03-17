/* 6. Ingresar números hasta que dicho número sea negativo.
    Por cada número leído, ingresar esa cantidad de números y obtener:
        a) El promedio de cada lote leído.
        b) Contar la cantidad de números pares de todos los números leídos. '
*/
#include <stdio.h>
int main()
{
    int nroIngresado, i, suma, pares = 0;
    float promedio;
    printf("ingrese un numero");
    scanf("%d", &nroIngresado);
    while (nroIngresado >= 0)
    {
        suma = 0;
        for (i = 0; i < nroIngresado; i++)
        {
            printf("ingrese otro numero");
            scanf("%d", &nroIngresado);
            if (nroIngresado % 2 == 0)
            {
                pares++;
            }
            suma += nroIngresado;
        }
        if (nroIngresado >= 0)
        {
            promedio = suma / nroIngresado;
            printf("el promedio del lote es de %.2f \n", promedio);
        }
    }
    printf("la cantidad de numeros pares es de  %d", pares);
}