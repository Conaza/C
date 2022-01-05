#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    system ("clear");
    float l, a, p, d;
    // l=lado do quadrado a= area p = perimetro d = diagonal
printf ("Insira o valor do lado do quadrado:");
scanf ("%f", &l);
a = l * l;
printf ("Área = %f\n", a);
p = l * 4;
printf ("Perímetro = %f\n", p);
d = l * sqrt(2);
printf ("Diagonal = %f\n", d);
    return 0;
}