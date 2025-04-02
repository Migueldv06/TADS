#include<stdio.h>
#include<math.h>

int main(){
    float x1, x2, y1, y2, d;

    printf("informe o X1: ");
    scanf("%f",&x1);

    printf("informe o Y1: ");
    scanf("%f",&y1);

    printf("informe o X2: ");
    scanf("%f",&x2);

    printf("informe o Y2: ");
    scanf("%f",&y2);

    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("a distancia e : %.2f",d);

}
