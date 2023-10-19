#include <stdio.h>
#include <stdlib.h>

//bir havuzun en, boy ve yukseklik bilgilerini alip hacmini hesaplayan programi yazin.

int main()
{
    float en,boy,yuks;

    printf("Lutfen havuzun olculerini en,boy ve yukseklik sirasi ile alt alta girin(metre).\n");
    scanf("%f%f%f",&en,&boy,&yuks);

    en=en*boy*yuks;

    printf("Havuzun hacmi: %.3f metrekup ",en);

    return 0;
}
