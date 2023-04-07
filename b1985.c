#include <stdio.h>

int main()
{
    int npurchased, order, quantity;
    double  price = 0;
    scanf("%d", &npurchased);
    while(npurchased > 0)
    {
        scanf("%d %d", &order, &quantity);

        switch (order)
        {
        case 1001:
            price += 1.50 * quantity;
            break;
        case 1002:
            price += 2.50 * quantity;
            break;
        case 1003:
            price += 3.50 * quantity;
            break;
        case 1004:
            price += 4.50 * quantity;
            break;
        case 1005:
            price += 5.50 * quantity;
        }
        npurchased--;
    }

    printf("%.2f\n", price);
    return 0;
}