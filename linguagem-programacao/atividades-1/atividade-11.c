#include<stdio.h>

int main(){
    float eleitores, embranco, nulo, valido, percent_eleitores, percent_embranco, percent_nulo, percent_valido;

    printf("informe quantos eleitores tem : ");
    scanf("%d", &eleitores);

    printf("informe quantos em branco tem : ");
    scanf("%d", &embranco);

    printf("informe quantos nulos tem : ");
    scanf("%d", &nulo);

    printf("informe quantos validos tem : ");
    scanf("%d", &valido);

    percent_embranco = (embranco/eleitores)*100;
    percent_nulo = (nulo/eleitores)*100;
    percent_valido = (valido/eleitores)*100;

    printf("Porcent Branco: %.2f \nPorcent Nulo: %.2f \nPorcent Valido: %.2f",percent_embranco,percent_nulo,percent_valido);

}
