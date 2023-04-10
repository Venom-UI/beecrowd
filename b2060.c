#include <stdio.h>

int main()
{
    int amount, mult2 = 0, mult4 = 0, mult5 = 0, mult3 = 0, current;
    scanf("%d", &amount);

    for (; amount > 0; amount--)
    {
        scanf("%d", &current);
        if (current % 2 == 0)
        {
            mult2 += 1;
            if (current % 4 == 0)
                mult4 += 1;
        }
        if (current % 3 == 0)
            mult3 += 1;
        if (current % 5 == 0)
            mult5 += 1;
    }
    printf("%d Multiplo(s) de 2\n", mult2);
    printf("%d Multiplo(s) de 3\n", mult3);
    printf("%d Multiplo(s) de 4\n", mult4);
    printf("%d Multiplo(s) de 5\n", mult5);
    return 0;
}