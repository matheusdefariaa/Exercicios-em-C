/* Potenciação */

#include <stdio.h>

int potencialnt(int, int ); // Protótipo da função


int main() {

    printf("%d\n",potencialnt(2,3));
    return 0;
}

int potencialnt(int base, int expoente){
    int potencial = 1;
    for (int x = 1; x <= expoente; potencial *= base,x++);
    return potencial;
}
