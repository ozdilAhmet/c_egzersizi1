#include <stdio.h>
#include <stdlib.h>
#define mil 1,609344

//Bir arabanin gittigi yolu mil cinsinden km. ye ceviren kodu yaziniz.

int main()
{
   float a,b;

   scanf("%f",&a);

   b=a*1.609;

   printf("%.2f mil = %.2f km",a,b);


    return 0;
}
