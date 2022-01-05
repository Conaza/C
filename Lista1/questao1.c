#include <stdio.h> 
#include <stdlib.h>
#include <math.h> 

  int main(void) { 
  system ("clear");
  int c, d, u, num, inv; 

  printf("Digite aqui o numero desejado, que seja em ate 3 digitos:"); 
  scanf("%i", &num); 

c = num/100; 
d = (num%100)/10; 
u = num%10; 

inv = (u*100)+(d*10)+(c); 

  printf("%i\n", inv); 

return 0; 
}