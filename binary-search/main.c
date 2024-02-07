/* Binary Search */

#include <stdio.h>

int binarySearch(int [],int,int,int); // Protótipo da função

int main() {
    int search, arrayNumber[10] = {1,2,3,4,5,6,7,8,9,10},number,len; // Declaração e Inicialização

    len = (sizeof(arrayNumber) / sizeof(arrayNumber[0])) -1; // Tamanho do array

    number = 3; // Número para ser encontrado

    search = binarySearch(arrayNumber,0,len,number); // Chamada da função

    printf("O número %d está na posição %d\n",number,search);

    return 0;
}

int binarySearch(int array[],int i,int f,int numero) {
    int meio; // Declaração da variável

    while (i < f) {
        meio = (i + f) / 2;
        
        if (numero == array[meio]) return meio;

        if (numero > array[meio]) i = meio + 1;
        else f = meio - 1;
    }

    return -1; // Retorna -1 caso o número não exista no array
}