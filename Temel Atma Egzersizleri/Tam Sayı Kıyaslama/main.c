#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%d%d",&a,&b);

    if (a==b)
    {
        printf("2 sayi birbirine esittir\n");
    }
    if (a!=b)
    {
        printf("2 sayi birbirine esit degildir\n");
    }
    if (a<b)
    {
        printf("a sayisi b sayisindan kucuktur\n");
    }
    if (a>b)
    {
        printf("a sayisi b sayisindan buyuktur\n");
    }

    if(a%b==0)
    {
        printf("A B'nin katidir");
    }
    else
    {
        printf("A B'nin kati degildir");
    }

    return 0;
}
