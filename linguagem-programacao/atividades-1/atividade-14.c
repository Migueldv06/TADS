#include<stdio.h>
#include<math.h>

int main(){
    int dist;
    float dist_km, litros, preco, custo;

    printf("informe a distancia");
    scanf("%d",&dist);

    printf("informe o preco");
    scanf("%f",&preco);

    dist_km = dist/1000;
    litros = dist_km/12;
    custo = litros*preco;

    printf("\nLitros : %.2f \nCusto : %.2f \n\n",litros, custo);

}
