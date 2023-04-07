#include <stdio.h>

int main()
{
    int floor1, floor2, floor3, wasted1, wasted2, wasted3, wasted4;
    scanf("%d%d%d", &floor1, &floor2, &floor3);

    wasted1 = floor2*2 + floor3*4;
    wasted2 = floor1*2 + floor3*2;
    wasted3 = floor2*2 + floor1*4;

    if (wasted1 < wasted2 && wasted1 < wasted3)
        wasted4 = wasted1;

    else if(wasted2 < wasted3)
        wasted4 = wasted2;

    else
        wasted4 = wasted3;

    printf("%d\n", wasted4);

    return 0;
}