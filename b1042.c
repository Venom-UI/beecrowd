#include <stdio.h>

int main()
{
    int a, b, c, x, y, z;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c){ 
        x = a;
        if (b > c) {y = b; z = c;}
            else {y = c; z = b;}
    }
    else if (b > c && b > a) {
        x = b;
        if (a > c) {y = a; z = c;}
            else {y = c; z = a;}
    }
    else{ 
        x = c;
        if (b > a) {y = b; z = a;}
            else {y = a; z = b;}
    }
    printf("%d\n%d\n%d\n", z, y, x);
    printf("\n%d\n%d\n%d\n", a, b ,c);
    return 0;
}