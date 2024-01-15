/* Cara ou Coroa */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    rand() % 2 == 0 ? printf("Cara\n"):printf("Coroa\n");

    return 0;
}
