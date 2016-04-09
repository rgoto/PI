#include <stdio.h>
#include <math.h>

double pi(void);
  int main(void) {
  
    printf("Valor de PI: %.7f\n", pi());

    }

double pi(void){
  int n=0;
    double valor_pi = 0.0, x;

      while (n < 1000000) {
    
           x =  4 * pow(-1,n)/(2*n +1);
            valor_pi = x + valor_pi;
            n++;
   
        }

    return valor_pi;
}
