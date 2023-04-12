#include <stdio.h>

int main()
{
    double input;
    int j = 0;
    for(int i = 0; i < 6; i++)
    {
        scanf("%lf", &input);
        if(input > 0)
            j += 1;
    }
        printf("%d valores positivos\n", j);
    return 0;
}