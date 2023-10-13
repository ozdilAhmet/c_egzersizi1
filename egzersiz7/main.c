#include <stdio.h>
#include <stdlib.h>
//Kullanicinin girdigi bir sayiyi 1'den baslayarak o sayiya kadar olan sayilarin toplamini
//bulan programi yaziniz.
int main()
{
 int a,b=1;

 printf("Lutfen bir sayi giriniz.\n");
 scanf("%d",&a);

 while(a>0)
    {
      b=a+b;
      a=a-1;
    }
printf("%d",b);

    return 0;
}
