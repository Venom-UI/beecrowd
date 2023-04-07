#include <stdio.h>

int main(){
    double Radius, Volume;
    scanf("%lf", &Radius); 

    Volume = (4/3.0) * 3.14159 * Radius*Radius*Radius;
    printf("VOLUME = %.3f\n", Volume);
    return 0;
}