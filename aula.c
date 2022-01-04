#include <stdio.h> 
#include <stdlib.h> 

  int main (){
    system ("clear");
      float sm;
      float Kw;
      float Vkw;
      float Vap;
      float Vcd;
      // sm= salário minimo kw= kilowatt Vkw = Valor kw vcd = Valor com desconto vap= Valor a ser pago
        printf ("Insira aqui o valor do salário minimo atual:");
        scanf ("%f", &sm);
        printf ("Insira aqui a quantidade de energia gasta em kilowatts:");
        scanf ("%f", &Kw);

 
     Vkw = sm / 7;
     printf ("Cada kilowatt vale: R$ %f\n", Vkw);
    Vap = Kw / 100 * Vkw;
     printf ("Valor a ser pago: R$ %f\n", Vap);
    Vcd = Vap / 100 * 90;
    printf ("Valor com desconto: R$ %f\n", Vcd);
  
return 0; 
}
