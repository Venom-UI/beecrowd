#include <stdio.h>

int main()
{
    float A, B, C, AVG;
    scanf("%f,%f,%f", &A,&B,&C);
    AVG = (A*2+B*3+C*5)/10;
    printf("MEDIA = %.1f", AVG);
    return 0;
}