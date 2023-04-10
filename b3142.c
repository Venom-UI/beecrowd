#include <stdio.h>

int main()
{
    int coluna, i = 0, ch2 = 0, ch3 = 0 , ch4 = 0,
        limite = (('X' - 64) * 26 * 26) + (('F' - 64) * 26) + ('D' - 64);
    char ch;

    while (scanf("%c", &ch) != EOF)
    {
        
        if (ch != '\n')
        {
            switch (i)
            {
            case 0:
                ch2 = ch;
                break;
            case 1:
                ch3 = ch;
                break;
            case 2:
                ch4 = ch;
                break;
            }
            i++;
            continue;
        }

        switch (i)
        {
        case 3:
            ch2 = (ch2 != 0) * ((ch2 - 64) * 26 * 26);
            ch3 = (ch3 != 0) * ((ch3 - 64) * 26);
            ch4 = (ch4 != 0) * (ch4 - 64);
            coluna = ch2 + ch3 + ch4;
            break;
        case 2:
            ch2 = (ch2 != 0) * ((ch2 - 64) * 26);
            ch3 = (ch3 != 0) * (ch3 - 64);
            coluna = ch2 + ch3 + ch4;
            break;
        case 1:
            ch2 = (ch2 != 0) * (ch2 - 64);
            coluna = ch2 + ch3 + ch4;
            break;
        default:
            coluna = 99999;
        }   
        if (coluna > limite)
            printf("Essa coluna nao existe Tobias!\n");
        else
            printf("%d\n", coluna);
        ch2 = ch3 = ch4 = i = 0;
    }

    return 0;
}