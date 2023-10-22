#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,a=1;
   float b=0;

   printf("Bir n degeri giriniz\n");
   scanf("%d",&n);

   while(a=!n)
   {
    b=b+(1/a);
    a++;
   }

   printf("%.2f",b);

    return 0;
}
