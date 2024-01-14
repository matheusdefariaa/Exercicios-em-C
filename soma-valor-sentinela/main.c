/* Somar valores inteiros obtidos atraves de um loop
controlado por sentinela */

#include <stdio.h>

int main(){
    int parcela = 0, sentinela = 9999, total = 0;


    while (parcela != sentinela) {
        printf("Digite um número\n");
        printf("Valor sentinela - 9999\n");
        total += parcela;
        scanf("%d",&parcela);
    }
    
    printf("O valor total é %d\n",total);
    return 0;
}