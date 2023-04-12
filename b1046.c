#include <stdio.h>

int main()
{
    int starth, finalh,totalh;
    scanf("%d %d", &starth, &finalh);

    totalh = finalh - starth;

    totalh += (totalh <= 0) * 24;

    printf("O JOGO DUROU %d HORA(S)\n", totalh);
    return 0;
}