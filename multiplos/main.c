/* Verificar se um número é multiplo do outro */

#include <stdio.h>

int multiplo(int, int);

int main(){

    printf("%d\n",multiplo(2,4));

    return 0;
}

int multiplo(int x, int y) {

    for (int z = 1; z<= (y / 2); z++) if (x * z == y) return 1;
    return 0;
}