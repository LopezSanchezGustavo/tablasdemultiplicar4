#include <stdio.h>

int main() {
float porcentaje, cantidad, multiplicaciones, resultado, resta;
printf ("Calcularemos a cuanto equivale el porcentaje a tu cantidad deseada\n(solo coloca los números sin las expresiones como $, %, o cualquier otra cosa)\n");
printf ("Coloca el procenta que deseas");
scanf ("%f",&porcentaje);
printf ("¿Cuál es la cantidad a la cuál le vamos a sacar ese porcentaje?");
scanf ("%f",&cantidad);
multiplicaciones = porcentaje * cantidad;
resultado = multiplicaciones / 100;
printf ("El resultado es %f",resultado);
resta = cantidad - resultado;
printf ("\n Quitándole ese porcentaje a la cantidad que indicaste que %f",resta);
   return 0;
}