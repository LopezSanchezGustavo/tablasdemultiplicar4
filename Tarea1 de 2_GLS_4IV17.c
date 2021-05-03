#include <stdio.h>
int main() {
int a, b, c, d;
printf ("Hoy sabremos cuantas canciones de 3 minutos podrías escuchar en tu tiempo libre\n");
printf ("Dime la cantidad de tiempo en (minutos) que tienes libre");
scanf ("%d",&a);
printf ("La cantidad de canciones que puedes escuchar en ese tiempo son\n");
c = a / 3;
printf ("%d",c);
b = c * 3;
d = a - b;
printf ("\n y te sobran %d minutos",d);
   return 0;
}