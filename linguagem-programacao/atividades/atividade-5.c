#include<stdio.h>

int main(){
    float conta, comissao;

    printf("Informe o valor da conta: ");
    scanf("%f",&conta);

    comissao = conta*0.1;

    printf("\nConta : %.2f \nComissao : %.2f \n\n",conta, comissao);

}
