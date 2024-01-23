/* Quadrado */

#include <stdio.h>

int main() {
    int lado;

    printf("Digite o tamanho do lado do quadrado\n");
    scanf("%d",&lado);

    for (int x = 1; x <= lado; x++){
         for (int y = 1; y <= lado; y++) printf("*");
         printf("\n");
    }

    return 0;
}