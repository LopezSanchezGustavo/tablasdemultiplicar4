/* Programa 3 Gustavo Lopez Sanchez 4IV17 
Alfa buena Maravilla Dinamita_Si es par e impar*/

#include <stdio.h>
int main () 
{
    int numero;
    printf ("\n Introduce un numero");
    scanf ("%d",&numero);

        if ( numero%2 == 0 )//"%"  Nos sirve para que nos de un residuo//
         //"==" el doble igual nos sirve para comparacion y si solo es un igual es para dar un valor//
    {
        printf ("\n El numero es PAR");
    }
    else 
    {
        printf ("\n El numero es IMPAR");
    }
    return 0;
}