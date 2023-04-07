#include <stdio.h>

int main()
{
    int t, a, b, c, d, e, f=0;
    scanf("%d%d%d%d%d%d", &t, &a, &b, &c, &d, &e);

    f = (t == a) + (t == b) + (t == c) + (t == d) + (t == e);
    printf("%d\n", f);
    return 0;
}