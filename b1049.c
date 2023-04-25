#include <stdio.h>
#include <string.h>

int main()
{
    char vertebrate[50], familia[58], especie[50];

    scanf("%s", vertebrate);
    
    scanf("%s", familia);
    
    scanf("%s", especie);
    
    if(strcmp(vertebrate, "vertebrado") == 0)
    {
        printf("1\n");
        if(strcmp(familia, "ave") == 0)
        {
            printf("11\n");
            if(strcmp(especie, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            if(strcmp(especie, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        if(strcmp(familia, "mamifero") == 0)
        {
            printf("12\n");
            if(strcmp(especie, "onivoro") == 0)
            {
                printf("homem\n");
            }
            if(strcmp(especie, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    if(strcmp(vertebrate, "invertebrado") == 0)
    {
        printf("2\n");
        if(strcmp(familia, "inseto") == 0)
        {
            printf("21\n");
            if(strcmp(especie, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            if(strcmp(especie, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        if(strcmp(familia, "anelideo") == 0)
        {
            printf("22\n");
            if(strcmp(especie, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            if(strcmp(especie, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}