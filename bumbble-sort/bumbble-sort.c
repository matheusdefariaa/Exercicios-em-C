/* Bumbble Sort */

#include <stdio.h>

#define TAMANHO 4

int bumbbleSort(int [], int); // Protótipo da função

int main() {
    int numeros[TAMANHO] = {3,4,9,1}; // Declaração e Inicialização do array 
    
    for (int x = 0; x <= TAMANHO -1; x++) printf("%d",numeros[x]); // Imprimi o array da maneira digitada
    printf("\n");

    bumbbleSort(numeros, TAMANHO); // Chamada da função Bumbble

    for (int x = 0; x <= TAMANHO -1; x++) printf("%d",numeros[x]); // Imprimi o array do maior para o menor
    printf("\n");

    return 0;
}


int bumbbleSort(int array[], int tamanho) {
    int aux; // Variável auxiliar

    for (int x = 0; x <= tamanho -1; x++) {

        for (int y = 0; y < tamanho -1; y++) {
            
            if (array[y] < array[y + 1]){
                aux = array[y]; // Variável aux recebe o valor do elemento dentro do array especificado
                array[y] = array[y + 1]; 
                array[y + 1] = aux;
            }
        }
    }
}