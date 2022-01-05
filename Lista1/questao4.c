#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    system ("clear");
    float pi, r, a, p;
    pi = 3.14;
    printf ("Insira aqui o valor do raio:");
    scanf ("%f", &r);
p = 2 * pi * r;
printf ("Perímetro = %f\n", p);
a = pi * pow(r,2);
printf ("Área = %f\n", a);

    return 0;
}