#include <stdio.h>
    /* Gustavo Lopez sanchez
    equipo Alfa Buena Maravilla 12 de mayo */
int main () {
    float Fresa, cinco, $13, precio;
    printf ("\n Gustavo Lopez Sanchez");
    printf ("\n\n Comprando fruta");
    printf ("\n\n precio de cualquier fruta $13");
    printf ("\n\n ingrese la fruta que selecciono");
    scanf ("%f",&Fresa);
    printf ("\n\n ingrese el peso de la fruta seleccionada");
    scanf ("%f",&cinco);
    precio = cinco * 13;
    printf ("\n\n El precio total es $%f",precio);
    return 0;
}
