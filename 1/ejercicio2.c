/* 2. Ingresar el día y la cotización del dólar durante un mes. Calcular y mostrar el díadonde hubo la mayor cotización.
 */
#include <stdio.h>
int main (){
    int mayor_cotizacion, cotizacion_actual;
    int dia_mayor_cotizacion = 1;
    int dia_actual = 1;
    printf("ingrese la cotizacion del dolar al dia %d \n", dia_actual);
    scanf("%d", &mayor_cotizacion);
    dia_actual++;
    for (dia_actual; dia_actual <5 ; dia_actual++)
    {
        printf("ingrese la cotizacion del dolar al dia %d \n", dia_actual);
        scanf("%d", &cotizacion_actual);
        if (cotizacion_actual > mayor_cotizacion)
        {
            mayor_cotizacion = cotizacion_actual;
            dia_mayor_cotizacion = dia_actual;
        }
    }
    printf("el dia de mayor cotizacion fue %d con %d pesos", dia_mayor_cotizacion, mayor_cotizacion);
}