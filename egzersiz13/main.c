#include <stdio.h>
#include <stdlib.h>
#define pi 3.141

// yaricapi girilen dairenin alanini hesaplayiniz.

int main()
{
    float r;
    printf("dairenin yaricapi:");
    scanf("%f",&r);

    r=pi*r*r;

    printf("dairenin alani: %f",r);

    return 0;
}
