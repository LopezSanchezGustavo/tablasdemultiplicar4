#include <stdio.h>
    /* Gustavo Lopez sanchez
    equipo Alfa Buena Maravilla 12 de mayo */
int main () {
    
    float primer, segundo, multiplica, division;
    printf ("Gustavo Lopez Sanchez");
    printf ("\n \n Programa 3");
    printf ("\n \n Saca el promedio de valores reales");
    printf ("\n \n Dame el primer valor real");
    scanf ("%f",&primer);
    printf ("\n \n Dame el segundo valor real");
    scanf ("%f",&segundo);
    multiplica = primer * segundo;
    division = primer / segundo;
    printf ("\n El producto es %f",multiplica);
    printf ("\n El cociente es %f",division);
    return 0;
}