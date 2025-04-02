#include<stdio.h>

int main(){
    int d1, m1, a1, d2, m2, a2, dias1, dias2, dif;

    printf("Informe o dia 1: ");
    scanf("%d",&d1);

    printf("Informe o mes 1: ");
    scanf("%d",&m1);

    printf("Informe o ano 1: ");
    scanf("%d",&a1);

    printf("Informe o dia 2: ");
    scanf("%d",&d2);

    printf("Informe o mes 2: ");
    scanf("%d",&m2);

    printf("Informe o ano 2: ");
    scanf("%d",&a2);

    dias1 = d1+(m1*30)+(a1*360);
    dias2 = d2+(m2*30)+(a2*360);

    dif = dias2 - dias1;

    printf("a diferenca e : %d \n\n",dif);
}
