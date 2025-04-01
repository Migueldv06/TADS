#include<stdio.h>

int main(){
    int numero, sucessor;

    printf("informe o numero: ");
    scanf("%d",&numero);

    if (numero>=60){
        sucessor = 0;
    } else {
        sucessor = numero+1;
    }

    printf("\nO sucessor e %d ",sucessor);

}
