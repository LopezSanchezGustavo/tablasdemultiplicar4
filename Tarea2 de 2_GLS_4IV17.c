#include <stdio.h>
int main() {
int a, b, c, d, e, f;
printf ("Altura de un tiro vertical(expesa en m/s²)\n");
printf ("¿Cuál es la velocidad inicial?");
scanf ("%d",&a);
printf ("¿Cuál es la velocidad final?");
scanf ("%d",&b);
printf ("por último, ¿Cuánto tiempo se tardó en caer?");
scanf ("%d",&c);
e = a - b;
f = e * c;
d = f / 2;
printf ("El resultado es %d",d);
   return 0;
}