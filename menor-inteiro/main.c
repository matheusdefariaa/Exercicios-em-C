/* Encontrar o menor número inteiro 
sendo a quantidade de números especificada 
pelo primeiro scanf */

#include <stdio.h>

int main(){
    int qtd,numero,menor_numero;

    printf("Digite a quantidade de números: ");
    scanf("%d",&qtd);

    printf("Digite um número: ");
    scanf("%d",&numero);
    menor_numero = numero;

    for (int x = 2; x <= qtd; x++){
        printf("Digite um número: ");
        scanf("%d",&numero);
        if (numero < menor_numero) menor_numero = numero;
    }
    printf("Menor número digitado %d\n",menor_numero);
    return 0;
}
