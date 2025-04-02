#include<stdio.h>

int main(){
    float reais, dolar, euro, libra, peso;

    printf("Informe os Reais: ");
    scanf("%f",&reais);

    dolar = reais/5.02;
    euro = reais/5.37;
    libra = reais/5.92;
    peso = reais/0.079;


    printf("\nReais : %.2f \nDolar : %.2f \nEuro : %.2f \nLibra : %.2f \nPeso : %.2f \n\n",reais, dolar, euro, libra, peso);

}
