#include <stdio.h>

int main()
{
    int p, j1, j2, r, a, x;
    scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);
    x = j1 + j2;
    if (r == 1 && a == 1)
    {
        printf("Jogador 2 ganha!\n");
    }
    else if (r == 1 && a == 0)
    {
        printf("Jogador 1 ganha!\n");
    }
    else if (p == 1 && x % 2 == 0)
    {
        printf("Jogador 1 ganha!\n");
    }
    else if (p == 0 && x % 2 == 0)
    {
        printf("Jogador 2 ganha!\n");
    }
    else if (p == 1 && x % 2 != 0)
    {
        printf("Jogador 2 ganha!\n");
    }
    else if (p == 0 && x % 2 != 0)
    {
        printf("Jogador 1 ganha!\n");
    }
    return 0;
}