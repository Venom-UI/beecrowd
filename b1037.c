#include <stdio.h>

int main()
{
    double input;
    scanf("%lf", &input);

    if (input < 0 || input > 100)
        printf("Fora de intervalo\n");
    else if (input > 75)
        printf("Intervalo (75,100]\n");
    else if (input > 50)
        printf("Intervalo (50,75]\n");
    else if (input > 25)
        printf("Intervalo (25,50]\n");
    else
        printf("Intervalo [0,25]\n");
    return 0;
}