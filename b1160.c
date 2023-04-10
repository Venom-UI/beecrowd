#include <stdio.h>

int main()
{
    int repeat, popA, popB;
    double growthA, growthB;
    scanf("%d", &repeat);

    for(; repeat > 0; repeat--)
    {
        int i = 0;
        scanf("%d%d%lf%lf", &popA, &popB, &growthA, &growthB);
        while(popA <= popB)
        {
            i++;
            if (i > 100)
                break;
            else
            {
            popA += (growthA/100) * popA;
            popB += (growthB/100) * popB;
            }
        }
        if (i > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", i);

    }

    return 0;
}