/* Somar dois números inteiros */

#include <stdio.h>

int main(){
    int parcela1, parcela2, soma;

    /* Obter os valores */
    printf("Digite o primeiro número\n");
    scanf("%d",&parcela1);
    printf("Digite o segundo número\n");
    scanf("%d",&parcela2);

    /* Somar */
    soma = parcela1 + parcela2;

    printf("O total é %d\n",soma);

    return 0;
}