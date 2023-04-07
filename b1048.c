#include <stdio.h>

int main()
{
    float salary, newsalary, adjust;
    scanf("%f", &salary);

    if (salary >= 0 && salary <= 400.00)
    {
        adjust = salary * 0.15;
        newsalary = salary + adjust;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", adjust);
        printf("Em percentual: 15 %%\n");
    }
    else if (salary >= 400.01 && salary <= 800.00)
    {
        adjust = salary * 0.12;
        newsalary = salary + adjust;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", adjust);
        printf("Em percentual: 12 %%\n");
    }
    else if (salary >= 800.01 && salary <= 1200.00)
    {
        adjust = salary * 0.10;
        newsalary = salary + adjust;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", adjust);
        printf("Em percentual: 10 %%\n");
    }
    else if (salary >= 1200.01 && salary <= 2000.00)
    {
        adjust = salary * 0.07;
        newsalary = salary + adjust;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", adjust);
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        adjust = salary * 0.04;
        newsalary = salary + adjust;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", adjust);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}