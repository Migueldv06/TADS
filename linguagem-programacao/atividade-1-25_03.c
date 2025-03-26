#include<stdio.h>

int main(){
    float peso, imc, altura;
    int idade;

    printf ("informe a sua altura:\n");
    scanf ("%f",&altura);

    if(altura > 5){
        altura = altura/100;
    }

    printf ("informe o seu peso:\n");
    scanf ("%f",&peso);

    printf ("informe a sua idade:\n");
    scanf ("%d", &idade);

    imc = peso/(altura*altura);
    printf ("\n\nO seu imc e %.1f",imc );

    printf ("\n\n\n\nDados : \nAltura: %.2f \nPeso: %.2f \nIdade: %d",altura ,peso ,idade);
}
