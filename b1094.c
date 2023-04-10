#include <stdio.h>

int main()
{
    int coelho = 0, rato = 0, sapo = 0, repeat, amount, cobaia = 0;
    double percent;
    char animal;

    scanf("%d", &repeat);

    for(; repeat > 0; repeat--)
    {
        scanf("%d %c", &amount, &animal);

        cobaia += amount;

        switch (animal)
        {
        case ('C'):
            coelho += amount;
            break;
        case ('R'):
            rato += amount;
            break;
        case ('S'):
            sapo += amount;
        }

    }
    printf("Total: %d cobaias\n", cobaia);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    percent = (coelho * 100.0) / cobaia;
    printf("Percentual de coelhos: %.2f %%\n", percent);
    percent = (rato * 100.0) / cobaia;
    printf("Percentual de ratos: %.2f %%\n", percent);
    percent = (sapo * 100.0) / cobaia;
    printf("Percentual de sapos: %.2f %%\n", percent);

    return 0;
}