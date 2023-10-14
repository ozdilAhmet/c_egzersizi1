#include <stdio.h>
#include <stdlib.h>

//Kullanicinin girdigi iki sayinin carpiminin isaretini sayilari carpmadan bulan programi yaziniz.
//Sonuc +1 , -1 ve 0 olmalidir.

int main()
{
    int a,b;

    printf("Lutfen iki sayi giriniz.\n");
    scanf("%d%d",&a,&b);

    if((a>0 && b>0) || (a<0 && b<0))
        printf("isaret(%d*%d) = +1",a,b);
    else if((a>0 && b<0) || (a<0 && b>0))
        printf("isaret(%d*%d) = -1",a,b);
    else
        printf("isaret(%d*%d) = 0",a,b);




    return 0;
}
