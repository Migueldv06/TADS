#include<stdio.h>

int main(){
    float horas, dias;

    printf("informe as horas:");
    scanf("%f", &horas);

    dias = horas/24;

    printf("\nhoras informadas em dias = %.2f",dias);

}
