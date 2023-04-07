#include <stdio.h>

int main()
{
    double smoney;
    int smoney2, smoney3, smoney4;
    scanf("%lf", &smoney);

    smoney3 = smoney;
    smoney -= smoney3;
    smoney4 = smoney * 100;

    printf("NOTAS:\n");
    smoney2 = smoney3/100;
    printf("%d nota(s) de R$ 100.00\n", smoney2);
    smoney3 %= 100;

    smoney2 = smoney3/50;
    printf("%d nota(s) de R$ 50.00\n", smoney2);
    smoney3 %= 50;

    smoney2 = smoney3/20;
    printf("%d nota(s) de R$ 20.00\n", smoney2);
    smoney3 %= 20;

    smoney2 = smoney3/10;
    printf("%d nota(s) de R$ 10.00\n", smoney2);
    smoney3 %= 10;

    smoney2 = smoney3/5;
    printf("%d nota(s) de R$ 5.00\n", smoney2);
    smoney3 %= 5;

    smoney2 = smoney3/2;
    printf("%d nota(s) de R$ 2.00\n", smoney2);
    smoney3 %= 2;

    printf("MOEDAS:\n");
    smoney2 = smoney3/1;
    printf("%d moeda(s) de R$ 1.00\n", smoney2);
    smoney3 %= 1;

    smoney2 = smoney4/50;
    printf("%d moeda(s) de R$ 0.50\n", smoney2);
    smoney4 %= 50;

    smoney2 = smoney4/25;
    printf("%d moeda(s) de R$ 0.25\n", smoney2);
    smoney4 %= 25;

    smoney2 = smoney4/10;
    printf("%d moeda(s) de R$ 0.10\n", smoney2);
    smoney4 %= 10;

    smoney2 = smoney4/5;
    printf("%d moeda(s) de R$ 0.05\n", smoney2);
    smoney4 %= 5;

    smoney2 = smoney4/1;
    printf("%d moeda(s) de R$ 0.01\n", smoney2);
    smoney4 %= 1;

    return 0;
}