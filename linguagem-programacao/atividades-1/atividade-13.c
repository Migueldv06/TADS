#include<stdio.h>
#include<math.h>

int main(){
    int b, c;
    float a;

    printf("informe o b: ");
    scanf("%d",&b);

    printf("informe o c: ");
    scanf("%d",&c);

    a = sqrt((b*b)+(c*c));

    printf("Hipotenusa  e : %.2f",a);

}
