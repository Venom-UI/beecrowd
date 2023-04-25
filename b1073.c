#include <stdio.h>

int main()
{
    int interval, current;
    scanf("%d", &interval);

    for(current=1;current <= interval;current++)
        if (current % 2 == 0)
            {printf("%d^2 = %d\n", current, current*current);
            current++;}
    return 0;
}