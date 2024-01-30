/* Validador de CPF */

#include <stdio.h>

#define TAMANHO 11

int main() {

    int cpf[TAMANHO] = {7,8,9,6,3,2,4,8,0},total = 0,multiplicador = 10, digito_1,digito_2;

    /* Validar o primeiro digito */

    for (int x = 0; x <= TAMANHO - 1; x++){
        total += cpf[x] * multiplicador;
        --multiplicador;
    }

    digito_1 = (total * 10) % 11;

    if (digito_1 >= 10) digito_1 = 0;

    /* Validando o segundo digito */

    total = 0; // Zerando a variavel total
    multiplicador = 10; // Voltando a variavel ao seu estado inicial

    for (int y = 0; y<= TAMANHO - 1; y++) {
        total += cpf[y] * (multiplicador + 1);
        --multiplicador;
    }

    total += digito_1 * 2;

    digito_2 = (total * 10) % 11;

    if (digito_2 >= 10) digito_2 = 0;

    printf("%d%d\n",digito_1,digito_2);
    return 0;
}