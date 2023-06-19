#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,sayi_total;
    printf("Yuzler basamagi: \n");
    scanf("%d",&x);
    printf("Onlar basamagi: \n");
    scanf("%d",&y);
    printf("Birler basamagi: \n");
    scanf("%d",&z);
    sayi_total=100*x+10*y+z;
    printf("Sayimiz: %d",sayi_total);
    return 0;
}
