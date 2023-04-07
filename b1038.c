#include <stdio.h>

int main()
{
    int code, quant;
    double final;
    scanf("%d%d", &code, &quant);

    switch (code)
    {
    case 1:
        final = 4.00 * quant;
        break;
    case 2:
        final = 4.50 * quant;
        break;
    case 3:
        final = 5.00 * quant;
        break;
    case 4:
        final = 2.00 * quant;
        break;
    case 5:
        final = 1.50 * quant;
        break;
    }
    printf("Total: R$ %.2f\n", final);

    return 0;
}