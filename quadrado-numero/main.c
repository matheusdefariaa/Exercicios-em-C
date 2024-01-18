/* Números elevado ao quadrado */

#include <stdio.h>

int quadrado(int);

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d",&numero);

    printf("O quadrado do número %d é %d\n",numero,quadrado(numero));

    return 0;
}

int quadrado(int x) {
    return x * x;
}