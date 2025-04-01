#include<stdio.h>

int main(){
    int minutos, dias, horas;

    printf("informe os minutos: ");
    scanf("%d",&minutos);

    dias = (minutos/60)/24;
    horas = (minutos/60)%24;
    minutos = minutos%60;

    printf("\n %d dias %d horas %d minutos",dias ,horas, minutos);

}
