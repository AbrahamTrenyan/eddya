/* 3. Se ingresan la cantidad de autos vendidos en los últimos 9 años. Calcular y mostrar:
            a) El año que se vendieron la mayor cantidad de autos.
            b) La cantidad total de autos vendidos
 */
#include <stdio.h>
int main(){
    int anio_actual = 1;
    int autos_vendidos, total_autos_vendidos, anio_con_mas_ventas, mayorVenta;
    printf("Ingrese la cantidad de autos vendidos en el anio %d \n", anio_actual);
    scanf("%d", &autos_vendidos);
    total_autos_vendidos = autos_vendidos;
    anio_con_mas_ventas = anio_actual;
    mayorVenta = autos_vendidos;
    anio_actual++;
    for (anio_actual; anio_actual <= 9; anio_actual++)
    {
        printf("Ingrese la cantidad de autos vendidos en el anio %d \n", anio_actual);
        scanf("%d", &autos_vendidos);
        total_autos_vendidos += autos_vendidos;
        if (autos_vendidos > mayorVenta)
        {
            anio_con_mas_ventas = anio_actual;
            mayorVenta = autos_vendidos;
        }
    }
    printf("el anio en el que se vendieron mas autos fue el %d y el total de autos vendidos fue de %d", anio_con_mas_ventas, total_autos_vendidos);
}