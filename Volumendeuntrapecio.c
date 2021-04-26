#include <stdio.h>

int main() {

    int area, altura, largo, a;
    printf("¿quires saber el volumen de trapecio?");
    printf("\n¿Cual es su area?");
    scanf("%d",&area);
    printf("¿Cual es la altura de tu trapecio?");
    scanf("%d",&altura);
    printf("¿Cual es la el largo de tu trapecio");
    scanf("%d",largo);
    a = area * altura * largo;
    printf("El volumen de tu trapecio es %d",&a);

    return 0;

}