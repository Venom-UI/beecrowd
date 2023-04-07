#include <stdio.h>

int main()
{
    int id, hours;
    float salary;
    scanf("%d%d%f", &id, &hours, &salary);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", id, hours * salary);
    return 0;
}