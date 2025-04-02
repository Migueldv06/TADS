#include<stdio.h>
#include<string.h>

int main() {
    char palavra[99],palavra_invertida[99];
    int check_palindromo;

    printf("Aplicação de verificação de palindromos\n\n");
    printf("informe a palavra: ");
    scanf("%s", palavra);

    strcpy(palavra_invertida,palavra);
    size_t size = strlen(palavra_invertida);
    for(int i = 0; i < size / 2; i++){
    char tmp = palavra_invertida[i];
    palavra_invertida[i] = palavra_invertida[size - i - 1];
    palavra_invertida[size - i - 1] = tmp;
    }

    check_palindromo = strcmp(palavra, palavra_invertida);

    if (check_palindromo == 0){
        printf("\n\nA palavra e um palindromo");
    } else {
        printf("\n\nA palavra nao e um palindromo");
    }


    printf("\n\n\nA palavra informada foi: %s", palavra);
    printf("\nA palavra invertida foi: %s\n\n", palavra_invertida);
}
