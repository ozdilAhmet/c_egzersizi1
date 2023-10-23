#include <stdio.h>
#include <stdlib.h>
#define sbt 0.25

/*bir telefon sirketi 3 dk.lik ucret icin 0.25 tl almaktadir. Bunu asan her durumda
her dakika basina 0.08 tl alinmaktadir. Görüsme süresinin ücretini hesaplayan programi yazin.*/

int main()
{
    float sure,a=0.08;


    printf("Konuþma suresini giriniz: ...saniye\n");
    scanf("%f",&sure);

    if(sure<=180)
        printf("Ucret: %.2f",sbt);
    if(sure>180)
    {
      if((float)sure-180 <=  60)
       printf("Ucret: %.2f",sbt + a);
      else
      {
       printf("Ucret: %.2f",sbt + (((int)sure / 60 -2)*0.08));
      }
    }



    return 0;
}
