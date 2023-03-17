/* 4. Ingresar números hasta que dicho número sea negativo. Calcular y mostrar:a) Cantidad de números mayores a 4 y menores a 25.b) Promedio de aquellos números múltiplos de 6.c) El menor número leído.
 */
/// ACLARACION ---> Entiendo por la consigna que deben ser nros mayores a 4 y menores a 25, si no se da una de las dos condiciones no lo cuento.
#include <stdio.h>
int main(){
    int nro_ingresado, promedio_multiplos_de_seis, menor;
    int cantidad_mayores_a_cuatro_y_menores_a_veinticinco = 0,suma_multiplos_de_seis = 0, cantidad_multiplos_de_seis = 0;
    printf("ingrese un numero");
    scanf("%d", &nro_ingresado);
    menor = nro_ingresado;
    while (nro_ingresado >= 0)
    {
       
        if (nro_ingresado > 4 && nro_ingresado < 25)
        {
            cantidad_mayores_a_cuatro_y_menores_a_veinticinco++;
        }
        if (nro_ingresado %6 == 0){
            cantidad_multiplos_de_seis++;
            suma_multiplos_de_seis += nro_ingresado;
        }
         if (nro_ingresado<menor)
        {
            menor = nro_ingresado;
        }
        printf("ingrese un numero");
        scanf("%d", &nro_ingresado);
        }
        promedio_multiplos_de_seis = suma_multiplos_de_seis / cantidad_multiplos_de_seis;
        printf("La Cantidad de números mayores a 4 y menores a 25 es de %d \nEl promedio de los multiplos de 6 es de %d \nEl menor numero ingresado fue: %d", cantidad_mayores_a_cuatro_y_menores_a_veinticinco, promedio_multiplos_de_seis, menor);
}