#include <stdio.h>

int main()
{
    int starth, startm, finalh, finalm, total, totalm, totalh;
    scanf("%d %d %d %d", &starth, &startm, &finalh, &finalm);

    total = ((finalh*60)+finalm) - ((starth*60)+startm);

    total += (total <= 0) * (24*60);
    
    totalh = total / 60;
    totalm = total % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalm);
    return 0;
}