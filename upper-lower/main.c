/* Upper or Lower */

#include <stdio.h>

char upper(char []); // Protótipo da função
char lower(char []); // Protótipo da função

int main () {
    char word[] = "green", color[] = "BLUE"; // Declaração e Inicialização das variáveis

    printf("%s\n",word); // Lower
    upper(word); // Upper

    printf("\n"); // Espaço

    printf("%s\n",color); // Upper
    lower(color); // Lower

    return 0;
}

char upper(char arrayWord[]) {
    char letter; // Variável auxiliar

    while (arrayWord[letter] != '\0') {
        if (arrayWord[letter] >= 'a' && arrayWord[letter] <= 'z') {
            arrayWord[letter] -= 32;
        }
        ++letter;
    }

    printf("%s\n",arrayWord); // Exibir array
}

char lower(char arrayWord[]) {
    char letter; // Variável auxiliar

    while (arrayWord[letter] != '\0') {
        if (arrayWord[letter] >= 'A' && arrayWord[letter] <= 'Z') {
            arrayWord[letter] += 32;
        }
        ++letter;
    }

    printf("%s\n",arrayWord); // Exibir array
}