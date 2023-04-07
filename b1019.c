//2023200 9694
#include <stdio.h>
int main()
{
    int tempo,horas, minutos, segundos;
    scanf("%d", &tempo);
    horas = tempo / 3600;
    tempo = tempo % 3600;
    minutos = tempo / 60;
    tempo = tempo % 60;
    segundos = tempo;
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}