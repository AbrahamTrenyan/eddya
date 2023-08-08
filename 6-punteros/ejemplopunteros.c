#include <stdio.h>

void sumar(int a, int *b, int *resultado)
{
    *resultado = a + *b;
    *b = 0;
}

int main()
{
    int x = 5, y = 3, z;
    sumar(x, &y, &z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    /* x = 5, y = 0, z = 8 */
    return 0;
}