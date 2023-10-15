#include <stdio.h>
#include <stdlib.h>

//Kullanicidan alinan n tam sayisi ile 0 arasinda yer alan 17 sayisi ve katlarini
//her satirda 10 sayi olacak sekilde bastirin.

int main()
{
  int a,b=0,c=17;
  scanf("%d",&a);

  while(c<=a)
  {
      c*=b;
      if(c>a)
        break;
      printf("%d\t",c);
      b++;
      c=17;
      if(b%10==0)
        printf("\n");


  }








    return 0;
}
