#include <stdio.h>
#include <stdlib.h>

//Girilen kucuk veya buyuk harfin kacinci sirada oldugunu bulun.

int main()
{
    char hrf;
    int x;

    printf("Harf giriniz.\n");
    fflush(stdin);
    s: scanf(" %c",&hrf);

    if((hrf>='A')&&(hrf<='Z'))
        x=(int)hrf - (int)'A' +1;
    else if((hrf>='a')&&(hrf<='z'))
        x=(int)hrf - (int)'a' +1;
    else
        {
        printf("Yanlis islem yaptiniz tekrar deneyin\n");
        goto s;
        }

    printf("Harfiniz %d. siradadir\n ",x);


    return 0;
}
