#include <stdio.h>

int main()
{
    int v1, v2, v3, v4, v5, even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5);

    if (v1%2 == 0)
        even ++;
    else
        odd ++;
    if (v1 > 0)

        positive ++;

    else if (v1 < 0)
    {
        negative ++;
    }
    
        if (v2%2 == 0)
        even ++;
    else
        odd ++;
    if (v2 > 0)
        positive ++;
    else if (v2 < 0)
    {
        negative ++;
    }

        if (v3%2 == 0)
        even ++;
    else
        odd ++;
    if (v3 > 0)
        positive ++;
    else if (v3 < 0)
    {
        negative ++;
    }

        if (v4%2 == 0)
        even ++;
    else
        odd ++;
    if (v4 > 0)
        positive ++;
    else if (v4 < 0)
    {
        negative ++;
    }

        if (v5%2 == 0)
        even ++;
    else
        odd ++;
    if (v5 > 0)
        positive ++;
    else if (v5 < 0)
    {
        negative ++;
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);
    return 0;
}