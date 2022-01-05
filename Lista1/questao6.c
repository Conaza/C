#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
        system ("clear");
    float a, b, c, y;
    printf ("Insira a incógnita A:");
    scanf ("%f", &a);
    printf ("Insira a incógnita B:");
    scanf ("%f", &b);
    printf ("Insira a incógnita c:");
    scanf ("%f", &c);
y = a + b / a + c + 2 * (a- b) + log2(64);
        printf ("O resultado da equação é = %f\n", y);
    return 0;
}