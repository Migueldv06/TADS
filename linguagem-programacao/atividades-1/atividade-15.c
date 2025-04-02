#include<stdio.h>
#include<math.h>

int main(){
    int cookies;
    float acucar,manteiga,farinha;

    printf("informe quantos cookies");
    scanf("%d",&cookies);

    acucar = 1.5*((cookies/48.0)*100);
    manteiga = 1*((cookies/48.0)*100);
    farinha = 2.75*((cookies/48.0)*100);

    printf("\nAcucar : %.2f \nManteiga : %.2f \n Farinha : %.2f \n\n",acucar,manteiga,farinha);

}
