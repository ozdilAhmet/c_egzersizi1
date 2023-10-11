#include <stdio.h>
#include <stdlib.h>

/*Kullanicinin girdigi 3 farkli tam sayiyi buyukten kucuge dogru
siralayan programi yaziniz.*/

int main()
{
  int sayi1,sayi2,sayi3;

   printf("Lutfen 3 farkli sayi giriniz.\n");
   scanf("%d%d%d",&sayi1,&sayi2,&sayi3);

   if(sayi1>sayi2 && sayi1>sayi3)
   {
    if(sayi2>sayi3)
       printf("%d>%d>%d",sayi1,sayi2,sayi3);
    else
       printf("%d>%d>%d",sayi1,sayi3,sayi2);
   }

   else if(sayi2>sayi1 && sayi2>sayi3)
   {
       if(sayi1>sayi3)
        printf("%d>%d>%d",sayi2,sayi1,sayi3);
       else
        printf("%d>%d>%d",sayi2,sayi3,sayi1);
   }

   else
   {
     if(sayi2>sayi1)
        printf("%d>%d>%d",sayi3,sayi2,sayi1);
     else
        printf("%d>%d>%d",sayi3,sayi1,sayi2);
   }


    return 0;
}
