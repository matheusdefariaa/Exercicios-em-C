/* Soma dos números inteiros pares
de 2 até 30 */

#include <stdio.h>

int main() {
    int total = 0;

    for (int x = 2; x <= 30; total += x, x += 2);
    printf("Total: %d\n",total);
    return 0;
}