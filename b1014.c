#include <stdio.h>

int main(){
    double spent;
    int distance;
    scanf("%d%lf",&distance ,&spent); 

    printf("%.3f km/l\n", distance / spent);
    return 0;
}