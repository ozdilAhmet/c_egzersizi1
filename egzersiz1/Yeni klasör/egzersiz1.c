#include <stdio.h>
#include <stdlib.h>


//Soru 1: Kullanýcýdan alýnan a,b,c ve x deðerleri ile ax^2 + bx + c = ?
//iþleminin sonucunu hesaplayýn ve ekrana basýn


int main()
{
 int a,b,c,x;
 int sonuc;

   printf("Lutfen bilinmeyen a,b,c ve x degerlerini giriniz.\n");

   printf("a degeri:");
   scanf("%d",&a);

   printf("\nb degeri:");
   scanf("%d",&b);

   printf("\nc degeri:");
   scanf("%d",&c);

   printf("\nx degeri:");
   scanf("%d",&x);

   sonuc=(a*x*x)+(b*x)+c;
   printf("\n%dx^2 + %dx +%d = %d",a,b,c,sonuc);



    return 0;
}
