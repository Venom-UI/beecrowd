#include <stdio.h>

int main()
{
    int rounds, entry1, entry2, points1, points2, i;
    scanf("%d", &rounds);
    while (rounds != 0)
    {
        for (points1 = i = points2 = 0; i < rounds; i++)
        {
            scanf("%d%d", &entry1, &entry2);
            if(entry1 > entry2)
                points1 += 1;
            else if (entry2 > entry1)
                points2 += 1;
        }
        printf("%d %d\n", points1, points2);
        scanf("%d", &rounds);

    } 
    
    return 0;
}