#include<stdio.h>

int main(){
    float nota1, nota2, peso1, peso2, media;

    printf("Informe a nota 1:");
    scanf("%f",&nota1);

    printf("Informe a nota 2:");
    scanf("%f",&nota2);

    printf("Informe o peso 1:");
    scanf("%f",&peso1);

    printf("Informe o peso2 2:");
    scanf("%f",&peso2);

    media = ((nota1*peso1)+(nota2*peso2))/(peso1+peso2);

    printf("\nNota1 : %.2f \nPeso 1: %.2f \nNota 2 : %.2f \nPeso : %.2f \nMedia : %.2f \n\n",nota1, peso1, nota2, peso2, media);

}
