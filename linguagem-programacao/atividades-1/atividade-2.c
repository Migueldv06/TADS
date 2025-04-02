#include<stdio.h>

int main(){
    float raio, perimetro,area;

    printf("Informe o raio:");
    scanf("%f",&raio);

    perimetro = (2*3.14)*raio;
    area = 3.14*(raio*raio);

    printf("\nRaio : %.2f \nPerimetro : %.2f \nArea : %.2f \n\n",raio, perimetro, area);

}
