#include <stdio.h>

int main()
{
    int first, second;
    scanf("%d%d", &first, &second);

    if (first % second == 0 || second % first == 0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}