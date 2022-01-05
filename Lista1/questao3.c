#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main(){
 
double h, b, a, p, d;
//h = altura b= base a = area p = perimetro d = diagonal
printf ("Insira o valor da altura do Retândulo:");
scanf ("%lf", &h);
printf ("Insira o valor da base do retângulo:");
scanf ("%lf", &b);
a = b * h;
printf("O valor da área é: %f\n", a);
p = (h*2) + (b*2);
printf ("O valor do perímetro é: %f\n", p);
d = sqrt(pow(h,2) + pow(b,2));
 printf("O valor da diagonal é: %f\n", d);
 return 0;
}