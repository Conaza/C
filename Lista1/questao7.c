#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float c1, c2, h;
    // cs =catetos h = hipotenusa
    printf ("Insira o valor do Cateto1:");
    scanf ("%f",&c1);
    printf ("Insira o valor do Cateto2:");
    scanf ("%f", &c2);
    h = sqrt(pow(c1,2)+pow(c2,2));
    printf ("O valor da hipotenusa é = %f\n", h);
    return 0;
}