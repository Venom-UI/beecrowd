#include <stdio.h>

int main()
{
    int sum = 0, x, y;
    scanf("%d%d", &x, &y);

    for (x--; x > y; x--)
        if (x % 2 == 1 || x % 2 == -1)
            sum += x;

    printf("%d\n", sum);
    return 0;
}