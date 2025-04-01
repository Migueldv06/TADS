#include<stdio.h>

int main(){
    int hectares, filhos, luiz;

    printf("informe os hectares: ");
    scanf("%d",&hectares);

    filhos = hectares/4;
    luiz = hectares%4;

    printf("filhos : %d \nLuiz: %d\n\n",filhos,luiz);

}
