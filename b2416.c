#include <stdio.h>

int main()
{
    int objetivo, comprimento, terminio;
    scanf("%d%d", &objetivo, &comprimento);

    terminio = objetivo % comprimento;
    printf("%d\n", terminio);
    return 0;
}