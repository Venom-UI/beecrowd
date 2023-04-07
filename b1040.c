#include <stdio.h>

int main()
{
    float note1, note2, note3, note4, note5, average;
    scanf("%f %f %f %f %f", &note1, &note2, &note3, &note4, &note5);

    average = (note1 * 2 + note2 * 3 + note3 * 4 + note4) / 10;
    printf("Media: %.1f\n", average);
    if (average >= 7.0)
        printf("Aluno aprovado.\n");
    else if (average >= 5.0)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", note5);
        average = (average + note5) / 2;
        if (average >= 5.0)
            printf("Aluno aprovado.\n");
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", average);

    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    return 0;
}