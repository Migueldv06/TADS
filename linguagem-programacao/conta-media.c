#include<stdio.h>

int main(){
    float media_final, nota1, nota2, nota3, nota4;

    printf ("Informe a nota 1 do aluno: ");
    scanf ("%f", &nota1);

    printf ("Informe a nota 2 do aluno: ");
    scanf ("%f", &nota2);

    printf ("Informe a nota 3 do aluno: ");
    scanf ("%f", &nota3);

    printf ("Informe a nota 4 do aluno: ");
    scanf ("%f", &nota4);

    media_final = (nota1+nota2+nota3+nota4)/4;

    printf ("\n\nA media final do aluno e =%.1f", media_final);



}
