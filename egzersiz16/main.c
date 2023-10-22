#include <stdio.h>
#include <stdlib.h>
#define T 18
#define B 17
#define S 19

//halý kodlarýna göre fiyat hesaplama sorusu
int main()
{

   char kod;
   float a;

   b: printf("Aldiginiz halinin kodu:\n");
   fflush(stdin);
   scanf("%c",&kod);
   printf("Dosenecek halinin metrekaresi\n");
   scanf("%f",&a);

   if(kod=='T')
   printf("Toplam tutar: %.3f",a*T);
   else if(kod=='B')
   printf("Toplam tutar: %.3f",a*B);
   else if(kod=='S')
   printf("Toplam tutar: %.3f",a*S);
   else{
   printf("Kod hatalidir tekrar deneyiniz.\n\n");
   goto b;
   }




    return 0;
}
