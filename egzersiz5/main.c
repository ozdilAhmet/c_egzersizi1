#include <stdio.h>
#include <stdlib.h>

//While dongusu kullanarak kullanicinin girecegi bir sayiyi birer birer azaltarak
//bire kadar bastirin.

int main()
{
  int a;
  printf("Lutfen bir sayi giriniz.\n");
  scanf("%d",&a);

  while(a!=0)
  {
    printf("%d  ",a);
    a-=1;
  }



    return 0;
}
