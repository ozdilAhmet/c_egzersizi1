#include <stdio.h>
#include <stdlib.h>

//Kullanicinin girdigi 5 basamakli bir sayiyi basamak degerlerine ayirin.

int main()
{
  int a;
  printf("Lutfen bir sayi giriniz.\n");
  scanf("%d",&a);


  printf("Sayinin  birler  basamagi degeri : %d\n",a%10);
  printf("Sayinin  onlar   basamagi degeri : %d\n",a%100/10);
  printf("Sayinin  yuzler  basamagi degeri : %d\n",a%1000/100);
  printf("Sayinin  binler  basamagi degeri : %d\n",a%10000/1000);
  printf("Sayinin onbinler basamagi degeri : %d\n",a%100000/10000);




    return 0;
}
