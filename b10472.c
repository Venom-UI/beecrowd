#include <stdio.h>

int main()
{
    int starth, startm, finalh, finalm, total, durationh, durationm;
    scanf("%d%d%d%d", &starth, &startm, &finalh, &finalm);
    startm = starth * 60 + startm;
    finalm = finalh * 60 + finalm;
    total = finalm - startm;

    printf("%d\n", total);

    total += (total <= 0) * (24*60);


    durationh = total / 60;
    durationm = total % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationh, durationm);
    return 0;
}