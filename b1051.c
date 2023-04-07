#include <stdio.h>

int main()
{
    float salary, percentage, taxes;
    scanf("%f", &salary);

    if (salary >= 0.00 && salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salary >= 2000.01 && salary <= 3000.00)
    {
        salary -= 2000.00;
        percentage = 0.08;
        taxes = salary * percentage;
        printf("R$ %.2f\n", taxes);
    }
    else if (salary >= 3000.01 && salary <= 4500.00)
    {
        salary -= 3000.00;
        percentage = 0.18;
        taxes = (salary * percentage) + 80.0;
        printf("R$ %.2f\n", taxes);
    }
    else
    {
        salary -= 4000.00;
        percentage = 0.28;
        taxes = salary * percentage + 210.00;
        printf("R$ %.2f\n", taxes);
    }

    return 0;
}