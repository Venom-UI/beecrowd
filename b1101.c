#include <stdio.h>

int main()
{
    int x, y, z, som;

    scanf("%d%d", &y, &x);

    while (x > 0 && y > 0)
    {
        if (x > y)
        {
            z = x;
            x = y;
            y = z;
        }
        for (som = 0; x <= y; x++)
        {
            printf("%d ", x);
            som += x;
        }

        printf("Sum=%d\n", som);
        scanf("%d%d", &y, &x);
    }

    return 0;
}