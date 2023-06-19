#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%f",&x);

    printf(">> f(%.3f) = %.3f",x,x*x*x+x*x*13+x*47+5);
    return 0;
}
