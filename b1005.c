#include <stdio.h>

int main()
{
    double A, B, AVG;
    scanf("%lf %lf", &A, &B);
    AVG = (A*3.5 + B*7.5) / 11.0;
    printf("MEDIA = %.5f\n", AVG);
    return 0;
}