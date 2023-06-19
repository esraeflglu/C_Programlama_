#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Lutfen 2 adet sayi giriniz: \n");
    scanf("%d%d",&a,&b);

    if((a==0) || (b==0))
    {
        printf("Carpim degeri 0'dir. \n");
    }
    else if (((a<0)&&(b<0)) ||((a>0)&&(b>0)))
    {
        printf("Carpim degeri pozitiftir.\n");
    }
    else
    {
        printf("Carpim degeri negatifitir.");
    }
    return 0;
}
