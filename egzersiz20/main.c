#include <stdio.h>
#include <stdlib.h>

//1/a ve 1/b kesirlerini toplayip cikaran c programi yaziniz

int main()
{
   char op;
   int a,b;

   printf("Operator giriniz (+,-): \n");
   scanf("%c",&op);
   printf("Iki tane sayi giriniz\n");
   scanf("%d%d",&a,&b);

   if(a==0 || b==0)
    printf("Ýslem yapilamaz");
   else
   {
    switch(op)
    {
       case '+': printf("Sonuc: 1/%d %c 1/%d = %d/%d",a,op,b,a+b,a*b);
       break;
       case '-': printf("Sonuc: 1/%d %c 1/%d = %d/%d",a,op,b,b-a,a*b);
       break;
       default: printf("operator yanlis");
       break;
    }
   }





    return 0;
}
