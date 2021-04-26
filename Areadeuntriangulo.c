#include <stdio.h>

int main() {

   printf ("Dame los numeros de tu triangulo");
   int a, b, c, resultado;
   printf ("¿Cuanto la base?");
   scanf("%d",&a);
   printf ("¿Cuanto mide la altura?");
   scanf ("%d",&b);
    c = a * b;
    printf("La base por la altura es %d",&c);
    printf("El resultado final es %d",&resultado);
    resultado = c / 2;

   return 0;
}
