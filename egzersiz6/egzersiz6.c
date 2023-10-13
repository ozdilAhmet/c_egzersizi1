#include <stdio.h>
#include <stdlib.h>
//Kullanicinin girdigi bir sayiyi 1'den baslayarak o sayiya kadar olan sayilarin toplamini
//bulan programi yaziniz.
int main()
{
 int a;

 printf("Lutfen bir sayi giriniz.\n");
 scanf("%d",&a);

 printf("%d",a*(a-1)/2);



    return 0;
}
