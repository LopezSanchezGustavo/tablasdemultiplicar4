#include <stdio.h>
    /* Gustavo Lopez sanchez
    equipo Alfa Buena Maravilla 12 de mayo */
int main () {
    float peso, altura, IMC;
    printf ("\n Programa 7");
    printf ("\n Gustavo Lopez Sanchez");
    printf ("\n\n Calcular el indice de masa corporal");
    printf ("\n\n Dame el peso");
    scanf ("%f",&peso);
    printf ("\n\n Dame la altura");
    scanf ("%f",&altura);
    IMC = peso / (altura * altura);
    printf ("\n La masa muscular es %f",IMC);
    return 0;    
}