#include <stdio.h>
int main() {
int a, b, c, d, e, f, g;
printf ("Hoy calcularemos la aceleración y fuerza de un objeto.\n");
printf ("Los valores que tenemos que tener son velocidad inicial, la velocidad final, tiempo y la masa del objeto(expresar la velocidad en m/s, el tiempo en segundos y la masa en kg)\n");
printf ("¿Cuál es el valor de la velocidad inicial?");
scanf ("%d",&a);
printf ("¿Cuál es el valor de la velocidad final?");
scanf ("%d",&b);
printf ("¿Cuál es su tiempo?");
scanf ("%d",&c);
d = b - a;
e = d / c;
printf ("La aceleración es %d\n",e);
printf ("Por último, ¿cuál es la masa del objeto?");
scanf ("%d",&f);
g = e * f;
printf ("La fuerza que le aplican al objeto es de %d newtons",g);
   return 0;
}