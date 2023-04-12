#include <stdio.h>
#include <string.h>

int main()
{
    char input;
    do
    {
        int count = 0, original[64], size;
        do
        {
            scanf("%c", &input);
            size = sizeof(original);
            for (; size > 0; size--)
            {
                if (original[size] != input)
                {
                    original[size] = input;
                    count += 1;
                    break;
                }
            }
        } while (input != '\n');

        printf("%d\n", count);

    } while (input != '*');

    return 0;
}