#include <stdio.h>
#include <stdlib.h>

//Kullanicinin girdigi bir sayiyi asagidaki fonksiyon ile hesaplayip donduren programi yaziniz
//f(x)=x^3 + 13x^2 + 47x + 5

double f(double x)
{
 double y;
 y = x*x*x + 13*x*x + 47*x +5;
 return y;
}

int main()
{
   double a,b,f();

   scanf("%lf",&a);
   b=f(a);
   printf("f(%.3lf) =  %.3lf ",a,b);


    return 0;
}
