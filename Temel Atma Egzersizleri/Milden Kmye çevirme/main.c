#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609

int main()
{
    float mil_yol,km_yol;
    printf("Arabanin gittigi yol \n");
    scanf("%f",&mil_yol,&km_yol);
    km_yol=mil_yol*MIL;
    printf("Araba %f km yol gitmistir.",km_yol);
    return 0;
}
