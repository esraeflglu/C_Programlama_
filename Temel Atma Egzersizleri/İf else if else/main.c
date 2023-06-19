#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&n);
    if((n%13==0)&&(n%17==0))
    {
        printf("Sayimiz 13 ve 17'ye bolunuyor\n");
    }
    else if(n%13==0)
    {
        printf("Sayimiz 13'e bolunuyor\n");
    }
    else if(n%17==0)
    {
        printf("Sayimiz 17'ye bolunuyor\n");
    }
    else
    {
        printf("Sayimiz 13 ve 17'ye bolunmuyor\n");
    }
    return 0;
}
