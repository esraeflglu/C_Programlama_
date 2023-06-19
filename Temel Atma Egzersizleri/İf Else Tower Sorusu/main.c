#include <stdio.h>
#include <stdlib.h>

int main()
{
    char can;
    printf("Lutfen bir harf giriniz: \n");
    scanf("%c",&can);
    if((can>='A')&&(can<='Z'))
    {
        printf("Kucuk harfimiz: %c\n",tolower(can));
    }
    else
    {
        printf("Yanlis bir karakter girdiniz");
    }
    return 0;
}
