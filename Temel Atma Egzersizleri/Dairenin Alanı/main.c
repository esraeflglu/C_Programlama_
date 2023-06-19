#include <stdio.h>
#include <stdlib.h>
#define PI 3.141

int main()
{
    float r,alan;
    printf("Lutfen yaricap giriniz \n");
    scanf("%f",&r);
    alan=PI*r*r;
    printf("Dairenini alani : %f",alan);
    return 0;
}
