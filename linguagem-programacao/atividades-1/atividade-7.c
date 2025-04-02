#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, delta, x1, x2;

    printf("Informe a: ");
    scanf("%f",&a);

    printf("Informe b: ");
    scanf("%f",&b);

    printf("Informe c: ");
    scanf("%f",&c);

    delta = (b*b)-(4*a)*c;

    x1 = ((-b)+sqrt(delta))/(2*a);
    x2 = ((-b)-sqrt(delta))/(2*a);


    printf("\nA : %.2f \nB : %.2f \nC : %.2f \nDelta : %.2f \nX1 : %.2f \nX2 : %.2f \n\n",a, b, c, delta, x1, x2);

}
