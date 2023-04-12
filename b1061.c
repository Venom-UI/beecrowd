#include <stdio.h>

int main()
{
    int starth, startm, finalh, finalm, total, totalm, totalh, startd, finald, totald, starts, finals, totals;
    scanf("%d %d %d %d %d %d %d %d", &startd, &starth,  &startm, &starts, &finald, &finalh,  &finalm, &finals);

    total = ((finald*86400)+(finalh*3600)+(finalm*60)+finals) - ((startd*86400)+(starth*3600)+(startm * 60)+starts);

    total += (total <= 0) * 86400;

    totald = total / 86400;
    total %= 86400;
    totalh = total / 3600;
    total %= 3600;
    totalm = total / 60;
    totals = total % 60;

    printf("%d dias(s)\n", totald);
    printf("%d hora(s)\n", totalh);
    printf("%d minuto(s)\n", totalm);
    printf("%d segundo(s)\n", totals);
    return 0;
}