#include <stdlib.h>
#include <stdio.h>
int multiplicacionRusaRecursiva(int x, int y)
{
    if (x <= 1)
    {
        return y;
    }
    else
    {
        if (x % 2 != 0)
        {
            return y + multiplicacionRusaRecursiva(x /= 2, y += y);
        }
        else
        {
            return multiplicacionRusaRecursiva(x /= 2, y += y);
        }
    }
}
int main()
{
    int a, b;
    printf("ingrese un nro");
    scanf("%d", &a);
    printf("ingrese otro nro");
    scanf("%d", &b);
    int resultado = multiplicacionRusaRecursiva(a, b);
    printf("El resultado es: %d\n", resultado);
    return 0;
}