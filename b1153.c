#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    m = n;
    for (n--; n>0; n--)
    {
        m *= n;
    }
    printf("%d\n", m);
    return 0;
}