#include <stdio.h>

int main()
{
    int A, B, D, E;
    double C, F, X;
    scanf("%d%d%lf%d%d%lf", &A,&B,&C,&D,&E,&F);
    X = (B*C)+ (E*F);
    printf("VALOR A PAGAR: R$ %.2f\n", X);
    return 0;
}