/* Fatorial dos números inteiros de 1 a 5 */

#include <stdio.h>

int main() {
    long fatorial;

    for (int x = 20; x >= 1; x--){
        fatorial = 1;
        for (int y = x; y >= 1; fatorial *= y, y--);
        printf("%d! = %lu\n",x,fatorial);
    }

    return 0;
}