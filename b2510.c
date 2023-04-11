#include <stdio.h>
#include <string.h>

int main()
{
    int cases;
    char name[25];

    scanf("%d", &cases);
    for(;cases > 0; cases--)
    {
        scanf("%s", name);
        printf("Y\n");
    }
    return 0;
}