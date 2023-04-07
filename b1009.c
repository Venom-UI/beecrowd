#include <stdio.h>

int main()
{
    double salary, bonus;
    char name[30];
    scanf("%s%lf%lf", name, &salary, &bonus);
    salary = salary + (bonus * 0.15);
    printf("TOTAL = R$ %.2f\n", salary);
    return 0;
}