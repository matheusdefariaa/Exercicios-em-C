/* Calcular a hipotenusa de um cateto */

#include <stdio.h>
#include <math.h>

double hipotesua (double, double);


int main() {

    printf("%.2f\n",hipotesua(4,2));

    return 0;
}


double hipotesua (double cateto_op, double cateto_ad){ // Calcula a hipotenusa de um triângulo
    return sqrt(pow(cateto_op,2) + pow(cateto_ad,2)); // Usa o math.h para as funções sqrt e pow
}