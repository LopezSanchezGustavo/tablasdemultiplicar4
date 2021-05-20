/* Programa 4 Gustavo Lopez Sanchez 4IV17 
Alfa buena Maravilla Dinamita_Verificar si es vocal o letra*/

#include <stdio.h>
int main () 
{
    int letra;
    printf ("\n Introduzca una letra");
    scanf ("%c",&letra); //"%c" en vez de meter un numero nos sirve para solamente meter una letra, no una palabra//
    if ( (letra == 'a' || letra == 'A') ||
         (letra == 'e' || letra == 'E') ||//Solo se coloca un comilla cuando indque que esa palabra o letra no es una variable o constante//
         (letra == 'i' || letra == 'I') ||//"||" nos indica que se cumple una u otra, es como si fuera && pero con O//
         (letra == 'o' || letra == 'O') ||
         (letra == 'u' || letra == 'U') 
    )
    {
        printf ("\n ES UNA VOCAL");
    }
    else 
    {
        printf ("\n NO ES VOCAL");
    }
    return 0;
}