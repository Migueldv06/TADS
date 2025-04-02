#include<stdio.h>

int main(){
    float conta, comissao ,porcentgarcom;

    printf("Informe o valor da conta: ");
    scanf("%f",&conta);

    printf("Informe a porcentagem da comissao: ");
    scanf("%f",&porcentgarcom);

    comissao = conta*(porcentgarcom/100);

    printf("\nConta : %.2f \nComissao : %.2f \nPorcentagem garcom : %.2f \n\n",conta, comissao, porcentgarcom);

}
