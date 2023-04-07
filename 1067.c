#include <stdio.h>

int main()
{
    int input, i = 0;

    scanf("%d", &input);
    do
    {
        if (i % 2 == 1)
            printf("%d\n", i);
        i++;
        
    }while(i <= input);

    return 0;
}