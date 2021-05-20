/* Programa 2 Gustavo Lopez Sanchez 4IV17 
Alfa buena Maravilla Dinamita_Verificar la hora*/

#include <stdio.h>
int main () 
{
    int hora, minutos, segundos;
    printf ("\n Introduce las horas");
    scanf ("%d",&hora);
    printf ("\n Introduce los minutos");
    scanf ("%d",&minutos);
    printf ("\n Introduce los segundos");
    scanf ("%d",&segundos);

    if (  (hora>=0 && hora<=23) && //"&&" es como si pusieramos "y" solo que en vez de eso se ponen esas 2 &&// 
          (minutos>=0 && minutos<=59) &&
          (segundos>=0 && segundos<=59) 
        )
    {
        printf ("\n El formato de hora es correcto");
    }
    else 
    {
        printf ("\n El formato de hora es incorrecto");
    }
    return 0;
}