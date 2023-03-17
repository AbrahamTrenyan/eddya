/* 1. Calcular el índice de masa corporal ingresando el peso de una persona en kilos y suestatura en metros. Este índice se obtiene realizando el cociente entre el peso y elcuadrado de la estatura.
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
    float peso, estatura, imc;
    printf("Ingrese su peso en kilos \n");
    scanf("%f", &peso);
    printf("Ingrese su estatura en metros \n");
    scanf("%f", &estatura);
    imc = peso/(estatura*estatura);
    printf("su indice de masa corporal es de %.2f ", imc);
}