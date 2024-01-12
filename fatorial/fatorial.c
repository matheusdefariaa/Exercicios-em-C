/* Programa que calcula o fatorial de um número inteiro não negativo */

#include <stdio.h>

int main(){
	int numero, fatorial = 1;

	printf("Digite um número inteiro não negativo\n");
	scanf("%d",&numero);

	/* Calculo do fatorial */
	while (numero >= 1) fatorial *= numero--;

	printf("O fatorial é %d\n",fatorial);

	return 0;
}
