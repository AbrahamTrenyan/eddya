/* 4. Dada la siguiente lista simplemente enlazada que contiene la siguiente información:

DNI: entero positivo de hasta 8 dígitos.
Nombre: cadena de 15 caracteres
Tipo de cuenta: carácter (C,E,A)
Saldo: real
Siguiente: puntero al próximo elemento de la lista.

Desarrollar un procedimiento que busque en la lista un nodo cuyo DNI sea igual a uno dado. El mismo devolverá un puntero al nodo hallado o NULL, si no existiera tal nodo

 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo
{
    int dni;
    char nombre[15];
    char tipoCuenta;
    float saldo;
    struct nodo *siguiente;
};
typedef struct nodo Nodo;
Nodo *buscarPorDni(Nodo *punt, int doc)
{
    while (punt != NULL)
    {
        if (punt->dni == doc)
        {
            return punt;
        }
        punt = punt->siguiente;
    }
    return NULL;
}
int main()
{
    int documento = 12345678;
    // Crear algunos nodos de prueba
    Nodo *nodo1 = malloc(sizeof(Nodo));
    Nodo *nodo2 = malloc(sizeof(Nodo));
    Nodo *nodo3 = malloc(sizeof(Nodo));
    Nodo *nodo4 = malloc(sizeof(Nodo));

    // Inicializar datos de prueba
    nodo1->dni = 12345678;
    strcpy(nodo1->nombre, "Juan Perez");
    nodo1->tipoCuenta = 'C';
    nodo1->saldo = 1000.0;
    nodo1->siguiente = nodo2;

    nodo2->dni = 23456789;
    strcpy(nodo2->nombre, "Maria Sanchez");
    nodo2->tipoCuenta = 'E';
    nodo2->saldo = 2000.0;
    nodo2->siguiente = nodo3;

    nodo3->dni = 34567890;
    strcpy(nodo3->nombre, "Pedro Gomez");
    nodo3->tipoCuenta = 'A';
    nodo3->saldo = 3000.0;
    nodo3->siguiente = nodo4;

    nodo4->dni = 45678901;
    strcpy(nodo4->nombre, "Luisa Fern");
    nodo4->tipoCuenta = 'C';
    nodo4->saldo = 4000.0;
    nodo4->siguiente = NULL;
    Nodo *punteroDNI = buscarPorDni(nodo1, documento);
    printf("%p", punteroDNI);
    return 0;
}