#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    do
    {
        printf("Bir sayi giriniz: ");
        scanf("%f",&x);
        if(x<0)
        {
            printf("Lutfen pozitif bir sayi giriniz\n");
        }
        if(x<0)continue;
        printf("Sayimizi karekoku: %.2f\n",sqrt(x));
    }
    while(x);

    return 0;
}
