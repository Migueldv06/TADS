#include<stdio.h>

int main(){
    float nota1, nota2,media;

    printf("Informe a nota 1:");
    scanf("%f",&nota1);

    printf("Informe a nota 2:");
    scanf("%f",&nota2);

    media = ((nota1*6)+(nota2*4))/10;

    printf("\nNota1 : %.2f \nNota2 : %.2f \nMedia : %.2f \n\n",nota1, nota2, media);

}
