#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&a);

    while(a!=0)
    {
        printf("%3d",a);
        a=a-1;
    }
    return 0;
}
