#include <stdio.h>

int main()
{
    int smoney, smoney2;
    scanf("%d", &smoney);

    printf("%d\n", smoney);

    smoney2 = smoney/100;
    printf("%d nota(s) de R$ 100,00\n", smoney2);
    smoney %= 100;

    smoney2 = smoney/50;
    printf("%d nota(s) de R$ 50,00\n", smoney2);
    smoney %= 50;

    smoney2 = smoney/20;
    printf("%d nota(s) de R$ 20,00\n", smoney2);
    smoney %= 20;

    smoney2 = smoney/10;
    printf("%d nota(s) de R$ 10,00\n", smoney2);
    smoney %= 10;

    smoney2 = smoney/5;
    printf("%d nota(s) de R$ 5,00\n", smoney2);
    smoney %= 5;

    smoney2 = smoney/2;
    printf("%d nota(s) de R$ 2,00\n", smoney2);
    smoney %= 2;

    smoney2 = smoney/1;
    printf("%d nota(s) de R$ 1,00\n", smoney2);
    smoney %= 1;

    return 0;
}