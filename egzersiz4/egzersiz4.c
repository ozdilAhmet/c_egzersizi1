#include <stdio.h>
#include <stdlib.h>

/*Kullanicinin girdigi 2 sayiyi girilen ikinci degeri referans alarak;
a) birinci sayinin durumunu belirtiniz
b) birinci sayinin ikinci sayinin bir kati olup olmadigini ekrana basiniz.*/
int main()
{
 /*a*/   int sayi1,sayi2;

    printf("Lutfen 2 sayi giriniz.\n");

    printf("Birinci sayi: ");
    scanf("%d",&sayi1);

    printf("Ikinci sayi: ");
    scanf("%d",&sayi2);

    if(sayi1==sayi2)
        printf("birinci sayi ikinci sayiya esittir.\n");
    else if(sayi1>sayi2)
        printf("birinci sayi ikinci sayidan buyuktur.\n");
    else
        printf("birinci sayi ikinci sayidan kucuktur.\n");
 /*b*/
    if(sayi1%sayi2 ==0)
            printf("Birinci sayi ikincinin tam katidir.\n");
    else
            printf("Birinci sayi ikincinin tam kati degildir.\n");



    return 0;
}
