/* Número de Armstrong*/

#include <stdio.h>
#include <math.h>

int armStrongNumber(int); // Protótipo da função


int main() {
    int n ;

    printf("Digite um número\n");
    scanf("%d",&n);

    armStrongNumber(n) == n ? printf("1\n"):printf("0\n"); // Verifiação 1 para True 0 para False

    return 0;
}

int armStrongNumber(int number) {
    int contador = 1,digit = 0,n = number,total = 0;

    // Verificar qtd de números
    while (number > 10) {
        digit = number % 10;
        number /= 10;
        ++contador;
    }

    // Verficiar o número
    while (n > 0) {
        digit = n % 10;
        n /= 10;
        total += pow(digit,contador);
    }

    return total; // Retorna o valor
}
