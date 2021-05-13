#include <stdio.h>
    /* Gustavo Lopez sanchez
    equipo Alfa Buena Maravilla 12 de mayo */
int main () {
    float numerodepersonas, numerodealimentos, porciones;
    printf ("\n Programa 1");
    printf ("\n Gustavo Lopez Sanchez");
    printf ("\n\n Dame el numero de personas");
    scanf ("%f",&numerodepersonas);
    printf ("\n\n Dame el numero de alimentos disponibles");
    scanf ("%f",&numerodealimentos);
    porciones = numerodepersonas / numerodealimentos;
    printf ("\n\n La porcion para dividir equitativamente a cada persona es %f",porciones);
    return 0;
}