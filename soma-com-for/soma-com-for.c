/* Soma dos números inteiros entre 1 e 10 */

#include <stdio.h>

int main(){
	int soma = 0;	
	for (int x = 1; x <= 10; soma += x, x++);
	printf("A soma é %d\n",soma);

	return 0;
}
