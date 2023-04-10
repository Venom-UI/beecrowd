#include <stdio.h>

int main()
{
    int entry, alcool = 0, gasolina = 0, diesel = 0;
    do
    {
        scanf("%d", &entry);
        if (entry < 4){
            switch (entry)
            {
            case 1:
                alcool += 1;
                break;
            case 2:
                gasolina += 1;
                break;
            case 3:
                diesel += 1;
            }
        }
    } while (entry != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    return 0;
}