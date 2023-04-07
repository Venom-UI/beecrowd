#include <stdio.h>

int main()
{
    double input, average = 0.0;
    int positive = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &input);
        if (input > 0)
        {
            positive += 1;
            average += input;
        }
    }

    average /= positive;

    printf("%d valores positivos\n", positive);
    printf("%.1f\n", average);
    return 0;
}