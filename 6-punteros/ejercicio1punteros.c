/*
    1) Escribir un programa en C que efectúe las siguientes operaciones:

    A.  Declarar un arreglo de quince posiciones de tipo float.
        En una función cargar sus elementos mediante el uso de un puntero (no utilizar subíndices)
    B.  En otra función que reciba el arreglo, declarar     un puntero a float y
        asignar al puntero la dirección del arreglo pasado por parámetro.
      Recorrer con el puntero el arreglo y utilizando el mismo mostrar
        la dirección y el contenido de cada posición. (no usar subíndices)
*/
#include <stdlib.h>
#include <stdio.h>

void cargar(float vec[])
{
    float elemento, *puntero = vec;
    for (int i = 0; i < 3; i++)
    {
        printf("ingrese un nro");
        scanf("%f", &elemento);
        *(puntero + i) = elemento;
    }
}
void puntoB(float vec[])
{
    float *p = vec;
    for (int i = 0; i < 3; i++)
    {
        printf("%p %f\n", (p + i), *(p + i));
    }
}

int main()
{
    float array[3];
    cargar(array);
    puntoB(array);

    return 0;
}
