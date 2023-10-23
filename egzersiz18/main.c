#include <stdio.h>
#include <stdlib.h>

// Bir ucgenin acilarini girdi olarak alip turunu belirleyen programi yaziniz

int main()
{
   int a,b,c;

   printf("Aci degerlerini giriniz.\n");
   scanf("%d%d%d",&a,&b,&c);

   if((a+b+c)==180)
   {
   if(a==b && a==c)
    printf("Eskenar ucgen");
   else if(a==b || a==c || b==c)
    printf("Ikizkenar ucgen");
   else if(a==90 || b==90 || c==90)
    printf("Dik ucgen");
   else if(a>90 || b>90 || c>90)
    printf("Genis acili ucgen");
   else if(a<90 && b<90 && c<90)
    printf("Dar acili ucgen");
   }
   else
    printf("Aci degerleri dogru degil.");



    return 0;
}
