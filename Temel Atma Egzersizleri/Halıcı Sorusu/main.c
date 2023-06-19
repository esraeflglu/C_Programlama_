#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kod;
    float alan,ucret=0;
    printf("Hali tipi T B S\n");
    scanf("%c",&kod);
    printf("Lutfen alani giriniz: ");
    scanf("%f",&alan);
    if(kod=='T')
    {
        ucret=alan*18;
    }
    else if(kod=='B')
    {
        ucret=alan*17;
    }
    else if(kod=='S')
    {
        ucret=alan*19;
    }
    else
    {
        printf("Kod dogru degil ");
    }
    printf("Odenmesi gereken ucret : %f",ucret);
    return 0;
}
