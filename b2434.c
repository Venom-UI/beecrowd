#include <stdio.h>

int main()
{

    int days, menor = 1000, money, change;
    scanf("%d%d", &days, &money);

    for(; days > 0; days--)
    {
        scanf("%d", &change);
        money += change;
        if (money < menor)
            menor = money;
    }

    printf("%d\n", menor);
}