#include <stdio.h>

int main(){
    int horasinf, horasresult, dias;

    printf("Informe as horas: ");
    scanf("%d", &horasinf);

    dias = horasinf/24;
    horasresult = horasinf % 24;

    printf("\n\nDias : %d \nHoras : %d",dias, horasresult);


}
