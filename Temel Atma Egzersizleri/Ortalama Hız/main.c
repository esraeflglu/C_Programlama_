#include <stdio.h>
#include <stdlib.h>
#define YOL 450
int main()
{
    float ortalama_hiz,saat;
    printf("Ankara'dan Istanbul'a kac saatte gittiniz: \n");
    scanf("%f",&saat);
    ortalama_hiz=YOL/saat;
    printf("Ortalama hiziniz: %.2f",ortalama_hiz);
    return 0;
}
