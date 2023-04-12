#include <stdio.h>
#include <vector>

int main()
{
    int properties, residents, consumptions, i = 0, medio, tconsumption = 0, tresidents = 0, j;

    do
    {
        scanf("%d", &properties);
        int resident[properties], pconsumption[properties];
        j = properties;

        printf("Cidade# 1:\n");
        
        i++;
        for (; properties > 0; properties--)
        {

            scanf("%d%d", &residents, &consumption);
            tconsumption += consumption;
            tresidents += residents;
            residents.insert(properties, residents);
            pconsumption.insert(properties, consumptions / residents);
        }
    } while (properties != 0);

    return 0;
}