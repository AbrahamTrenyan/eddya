#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Crear una lista simplemente enlazada con el número de legajo, nombre y apellido, sector (codificado entre 1 y 3), antigüedad y sueldo.
 La carga de datos finaliza cuando el número de legajo es igual a cero. Se pide:

Mostrar la lista con los datos cargados
- Calcular el promedio de sueldos del sector 2 y cuyos apellidos tengan mas de 4 caracteres.
- Generar una nueva lista con los empleados que pertenecen al sector que mas empleados tenga y que además tengan al menos 3 años de antigüedad. */
struct Empleado
{
    int legajo;
    char nombre[30];
    char apellido[30];
    int sector;
    int antiguedad;
    float sueldo;
    struct Empleado *sig;
};
typedef struct Empleado empleado;

void agregarEmpleado(empleado **inicio, int leg, char nom[], char ape[], int sector, int ant, float sueld);

void imprimir(empleado *start);

int calcularPromedio(empleado *start);

empleado *generarNuevaLista(empleado *start);

int main()
{
    int legajo;
    char nombre[30];
    char apellido[30];
    int sector;
    int antiguedad;
    float sueldo;

    empleado *empleados = NULL;
    empleado *maxSector;

    printf("Ingrese un legajo: ");
    scanf("%d", &legajo);
    while (legajo != 0)
    {
        printf("Ingrese el nombre: ");
        scanf("%s", nombre);
        printf("Ingrese el apellido: ");
        scanf("%s", apellido);
        printf("Ingrese el sector(1, 2, o 3): ");
        scanf("%d", &sector);
        printf("Ingrese la antiguedad: ");
        scanf("%d", &antiguedad);
        printf("Ingrese el sueldo: ");
        scanf("%f", &sueldo);

        agregarEmpleado(&empleados, legajo, nombre, apellido, sector, antiguedad, sueldo);
        printf("\nEmpleado cargado con exito. \nIngrese un legajo: ");
        scanf("%d", &legajo);
    }

    imprimir(empleados);

    maxSector = generarNuevaLista(empleados);
    imprimir(maxSector);
    printf("El promedio de sueldos del sector 2 y con apellido de más de 4 caracteres es: %d\n", calcularPromedio(empleados));
    return 0;
}

void imprimir(empleado *start)
{
    while (start != NULL)
    {
        printf("Empleado nro: %d\n", start->legajo);
        printf("%s", start->nombre);
        printf(" %s\n", start->apellido);
        printf("Sector: %d\n", start->sector);
        printf("Antiguedad: %d\n", start->antiguedad);
        printf("Sueldo: %.2f\n\n", start->sueldo);
        start = start->sig;
    }
}

void agregarEmpleado(empleado **inicio, int leg, char nom[], char ape[], int sector, int ant, float sueld)
{
    empleado *aux = *inicio;
    empleado *nuevo = (empleado *)malloc(sizeof(empleado));

    nuevo->legajo = leg;
    strcpy(nuevo->nombre, nom);
    strcpy(nuevo->apellido, ape);
    nuevo->sector = sector;
    nuevo->antiguedad = ant;
    nuevo->sueldo = sueld;
    nuevo->sig = NULL;

    if (aux == NULL)
    {
        *inicio = nuevo;
    }
    else
    {
        while (aux->sig != NULL)
            aux = aux->sig;
        aux->sig = nuevo;
    }
}

empleado *generarNuevaLista(empleado *start)
{
    int sectores[3] = {0, 0, 0};
    int sector_con_mas_empleados;
    empleado *aux = start;

    empleado *nuevaLista = NULL;

    while (aux != NULL)
    {
        sectores[(aux->sector) - 1]++;
        aux = aux->sig;
    }
    if (sectores[0] > sectores[1] && sectores[0] > sectores[2])
        sector_con_mas_empleados = sectores[0];
    if (sectores[1] > sectores[0] && sectores[1] > sectores[2])
        sector_con_mas_empleados = sectores[1];
    if (sectores[2] > sectores[1] && sectores[2] > sectores[0])
        sector_con_mas_empleados = sectores[2];

    while (start != NULL)
    {
        if (start->sector == sector_con_mas_empleados && start->antiguedad > 3)
        {
            agregarEmpleado(&nuevaLista, start->legajo, start->nombre, start->apellido, start->sector, start->antiguedad, start->sueldo);
        }
        start = start->sig;
    }

    return nuevaLista;
}
int calcularPromedio(empleado *start)
{
    int suma = 0, cantidad = 0, longitud = 0;
    while (start != NULL)
    {
        if (start->sector == 2)
        {
            for (int i = 0; start->apellido[i] != '\0'; i++)
            {
                longitud++;
            }
            if (longitud > 4)
            {
                suma += start->sueldo;
                cantidad++;
            }
        }
        start = start->sig;
    }
    return suma / cantidad;
}