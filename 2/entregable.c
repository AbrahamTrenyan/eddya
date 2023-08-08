/* A partir de los temas vistos en los dos primeros dos módulos, se pide desarrollar un programa en C utilizando funciones que permita:

Leer desde el teclado números enteros y cargar un vector con aquellos números pares. el fin de carga finaliza cuando se lee un cero o 100 números . Si el vector tiene elementos, mostrarlo; si no mostrar una leyenda indicando que no hay elementos y finalizar el programa. si hay datos se pide informar y realizar cada punto en una función:

a) Ingresar un numero por teclado y eliminar todos los números que se encuentren entre el promedio de los números ingresados en el arreglo y y el doble del numero ingresado.

b) Insertar un cero en la posición anterior a todos los valores pares (no lo pregunto porque ingreso solo nros pares al vector) que estén entre el máximo y el promedio de los datos del vector. Mostrar el vector.

c) Ordenar el vector de mayor a menor y mostrar el vector.

Se pide desarrollar la solución con al menos 5 funciones creadas por el programador.  */
#include <stdlib.h>
#include <stdio.h>

int cargar(int[]);
void mostrar(int[], int n);
float obtenerPromedio(int[], int n);
int puntoA(int[], int prom, int dimension);
int obtenerMaximo(int[], int dimension);
int puntoB(int[], int max, int prom, int dimension);
void ordenar(int[], int dimension);
int main()
{
    int vec[100];
    int dim = cargar(vec);
    int promedio;
    int maximo;
    if (dim == 0)
    {
        printf("no hay elementos.");
    }
    else
    {
        printf("Vector inicial \n");
        mostrar(vec, dim);
        promedio = obtenerPromedio(vec, dim);
        dim = puntoA(vec, promedio, dim);
        printf("Eliminando nros entre el doble del nro ingresado y el promedio  \n");
        mostrar(vec, dim);
        promedio = obtenerPromedio(vec, dim);
        maximo = obtenerMaximo(vec, dim);
        dim = puntoB(vec, maximo, promedio, dim);
        printf("Insertando ceros antes de los nros entre el máximo y el promedio\n");
        mostrar(vec, dim);
        ordenar(vec, dim);
        printf("Vector final ordenado de mayor a menor");
        mostrar(vec, dim);
    }
}
int cargar(int vec[])
{
    int tamanioReal = 0, nroIngresado;
    printf("ingrese un nro");
    scanf("%d", &nroIngresado);
    while (tamanioReal < 100 && nroIngresado != 0)
    {
        if (nroIngresado % 2 == 0)
        {
            vec[tamanioReal] = nroIngresado;
            tamanioReal++;
        }
        printf("ingrese un nro");
        scanf("%d", &nroIngresado);
    }
    return tamanioReal;
}
void mostrar(int vec[], int dim)
{
    int i;
    printf("ELEMENTO    VALOR \n");
    for (i = 0; i < dim; i++)
    {
        printf("%8d %8d \n", i, vec[i]);
    }
}

float obtenerPromedio(int vec[], int dim)
{
    int i, suma = 0;
    for (i = 0; i < dim; i++)
    {
        suma += vec[i];
    }
    return suma / dim;
}
int puntoA(int vec[], int promedio, int dim)
{
    int n, i, j;
    printf("ingrese un nro :");
    scanf("%d", &n);
    for (i = 0; i < dim; i++)
    {
        if (vec[i] > promedio && vec[i] < n + n || (vec[i] < promedio && vec[i] > n + n))
        {
            for (j = i; j < dim; j++)
            {
                vec[j] = vec[j + 1];
                dim--;
            }
            i--;
        }
    }
    return dim;
}

int obtenerMaximo(int vec[], int dim)
{
    int i, max = vec[0];
    for (i = 1; i < dim; i++)
    {
        if (vec[i] > max)
        {
            max = vec[i];
        }
    }
    return max;
}
int puntoB(int vec[], int max, int prom, int dimension)
{
    int i, j, nuevaDimension = dimension, aux;
    for (i = 0; i < dimension; i++)
    {
        if (vec[i] > prom && vec[i] < max)
        {
            for (j = nuevaDimension; j > i; j--)
            {
                vec[j] = vec[j - 1];
            }
            aux = vec[i];
            vec[i] = 0;
            vec[i + 1] = aux;
            i++;
            nuevaDimension++;
        }
    }
    return nuevaDimension;
}
void ordenar(int vec[], int dimension)
{
    int i, j, aux;
    for (i = 0; i < dimension; i++)
    {
        for (j = i + 1; j < dimension; j++)
        {
            if (vec[j] > vec[i])
            {
                aux = vec[j];
                vec[j] = vec[i];
                vec[i] = aux;
            }
        }
    }
}