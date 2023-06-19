#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,h;
    int taban_alan;
    int yanal_alan;
    int toplam_alan;
    int hacim;

    printf("Lutfen a b ve h deðerlerini giriniz\n");
    scanf("%d%d%d",&a,&b,&h);

    taban_alan=a*b;
    yanal_alan=2*a*h+2*b*h;
    toplam_alan=2*a*b+2*a*h+2*b*h;
    hacim=a*b*h;

    printf("Taban alan=%d\n",taban_alan);
    printf("Yanal alan=%d\n",yanal_alan);
    printf("Toplam_alan=%d\n",toplam_alan);
    printf("Hacim=%d\n",hacim);

    return 0;
}
