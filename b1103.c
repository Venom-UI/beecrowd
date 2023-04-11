#include <stdio.h>

int main()
{
    int shour, sminute, fhour, fminute, passed;

    do
    {
        scanf("%d%d%d%d", &shour, &sminute, &fhour, &fminute);

        sminute += shour * 60;
        fminute += fhour * 60;

        passed = fminute - sminute;

        if (passed > 0)
            printf("%d\n", passed);
        else if (passed < 0)
        {
            passed += 24*60;
            printf("%d\n", passed);
        }

    } while (sminute != 0 && fminute != 0);

    return 0;
}