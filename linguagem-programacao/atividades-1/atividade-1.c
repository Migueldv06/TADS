#include<stdio.h>

int main(){
    float metros, kms;

    printf("Informe os metros:");
    scanf("%f",&metros);

    kms = metros/1000;

    printf("\n%.0f metros e %.2fkm(s) \n\n",metros, kms);

}
