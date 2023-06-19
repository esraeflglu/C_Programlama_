#include <stdio.h>
#include <stdlib.h>

int main()
{
    float en,boy,yukseklik,metrekup;
    printf("Havuzumuzun eni boyu ve yuksekligi :\n");
    scanf("%f%f%f",&en,&boy,&yukseklik);
    metrekup=en*yukseklik*boy;
    printf("Havumuz %.2f kadar su alabilir",metrekup);
    return 0;
}
