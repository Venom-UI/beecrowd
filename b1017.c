#include <stdio.h>

int main()
{
    int spenttime, avgspeed;
    double usedfuel, distance;
    scanf("%d%d", &spenttime, &avgspeed);

    distance = spenttime * avgspeed;
    usedfuel = distance / 12.0;
    printf("%.3f\n", usedfuel);

    return 0;
}