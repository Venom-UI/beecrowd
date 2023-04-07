#include <stdio.h>

int main()
{
    double R, A, p; 
    p = 3.14159;
    scanf("%lf", &R);
    A = p * R * R;
    printf("A=%.4f\n", A);
    return 0;
}