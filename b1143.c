#include <stdio.h>

int main()
{
    int inp, a, b, c;
    scanf("%d", &inp);
    for (a = 1; a <= inp; ++a)
    {
        b = a * a;
        c = a * a * a;
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}