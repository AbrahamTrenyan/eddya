/* 5. Ingresar la edad y sueldo de los empleados de una empresa hasta que ambas sean cero.
Calcular y mostrar:
a) El promedio de edad de los que ganan más de $10000
b) El sueldo de aquellas personas mayores a 58 años, sabiendo que cobran un plus del 5% de su sueldo. /// PROMEDIO
c) El porcentaje de empleados cuyo sueldo es menor a 15000, que está entre 15000 y 20000, y mayor a 20000.
 */
#include <stdio.h>
int main()
{
    int edad_ingresada, sueldo_ingresado;
    int cantidad_sueldos_mayores_10000 = 0, suma_edades_mayores_10000 = 0, suma_mayores_58 = 0, cantidad_sueldos_menor_15000 = 0, cantidad_sueldos_entre_15000_y_20000 = 0, cantidad_sueldos_mayor_20000 = 0, cantidad_mayores_58 = 0, total_empleados = 0;
    float porcentaje_sueldos_menor_15000, porcentaje_sueldos_entre_15000_y_20000, porcentaje_sueldos_mayor_20000, promedio_mayores_10000, promedio_sueldos_mayores_58;
    printf("ingrese la edad del empleado");
    scanf("%d", &edad_ingresada);
    printf("ingrese el sueldo del empleado");
    scanf("%d", &sueldo_ingresado);
    while (sueldo_ingresado != 0 || edad_ingresada != 0)
    {
        total_empleados++;
        if (edad_ingresada >= 58)
        {
            sueldo_ingresado *= 1.05;
            cantidad_mayores_58++;
            suma_mayores_58 += sueldo_ingresado;
        }
        if (sueldo_ingresado > 10000)
        {
            cantidad_sueldos_mayores_10000++;
            suma_edades_mayores_10000 += edad_ingresada;
        }
        if (sueldo_ingresado < 20000)
        {
            if (sueldo_ingresado < 15000)
            {
                cantidad_sueldos_menor_15000++;
            }
            else
            {
                cantidad_sueldos_entre_15000_y_20000++;
            }
        }
        else
        {
            cantidad_sueldos_mayor_20000++;
        }
        printf("ingrese la edad del empleado");
        scanf("%d", &edad_ingresada);
        printf("ingrese el sueldo del empleado");
        scanf("%d", &sueldo_ingresado);
    }
    promedio_mayores_10000 = suma_edades_mayores_10000 / cantidad_sueldos_mayores_10000;
    promedio_sueldos_mayores_58 = suma_mayores_58 / cantidad_mayores_58;
    porcentaje_sueldos_menor_15000 = (cantidad_sueldos_menor_15000 * 100) / total_empleados;
    porcentaje_sueldos_entre_15000_y_20000 = (cantidad_sueldos_entre_15000_y_20000 * 100) / total_empleados;
    porcentaje_sueldos_mayor_20000 = (cantidad_sueldos_mayor_20000 * 100) / total_empleados;

    printf(" El promedio de edad de los que ganan más de $10000 es de %.2f \n El promedio de los sueldos de los mayores de 58 es de %.2f \n El porcentaje de empleados cuyo sueldo es menor a 15000 es de %f \n El porcentaje de empleados cuyo sueldo está entre 15000 y 20000 es de %.2f \n El porcentaje de empleados cuyo sueldo es mayor a 20000 es de %.2f \n", promedio_mayores_10000, promedio_sueldos_mayores_58, porcentaje_sueldos_menor_15000, porcentaje_sueldos_entre_15000_y_20000, porcentaje_sueldos_mayor_20000);
}
