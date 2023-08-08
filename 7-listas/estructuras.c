#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo
{
    int info;
    struct nodo *sig;
};
typedef struct nodo nodo;

void agregarNodoAlFinal(nodo **sPtr, int dato);
void agregarNodoAlPrincipio(nodo **sPtr, int dato);

void imprimir(nodo *inicio)
{
    while (inicio != NULL)
    {
        printf("%d -> ", inicio->info);
        inicio = inicio->sig;
    }
    printf("%p (NULL) \n", inicio);
}

int main()
{
    nodo *start = NULL;

    imprimir(start);
    agregarNodoAlPrincipio(&start, 9);
    imprimir(start);
    agregarNodoAlPrincipio(&start, 19);
    imprimir(start);
    agregarNodoAlPrincipio(&start, 29);
    imprimir(start);

    return 0;
}

void agregarNodoAlFinal(nodo **sPtr, int dato)
{
    nodo *nuevo_Nodo = (nodo *)malloc(sizeof(nodo));
    nuevo_Nodo->info = dato;
    nuevo_Nodo->sig = NULL;

    nodo *aux = *sPtr;
    // La lista esta vacia
    if (aux == NULL)
    {
        *sPtr = nuevo_Nodo;
    }
    else
    {
        while (aux->sig != NULL)
        {
            aux = aux->sig;
        }
        aux->sig = nuevo_Nodo;
    }
}

void agregarNodoAlPrincipio(nodo **sPtr, int dato)
{
    nodo *nuevo_Nodo = (nodo *)malloc(sizeof(nodo));
    nuevo_Nodo->info = dato;
    nuevo_Nodo->sig = NULL;

    nodo *aux = *sPtr;

    // La lista esta vacia
    if (aux == NULL)
    {
        *sPtr = nuevo_Nodo;
    }
    else
    {
        *sPtr = nuevo_Nodo;
        (*sPtr)->sig = aux;
    }
}

/*
    nodo *  punt;
    nodo * *sPtr;
*/