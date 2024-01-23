#include <stdio.h>
#include <math.h>

int main() {

    printf("Fabs: %f\n",fabs(7.5));    
    printf("Floor: %f\n",floor(7.5));
    printf("Fabs: %f\n",floor(0.0));
    printf("Ceil: %f\n",ceil(0.0));
    printf("Fabs: %f\n",fabs(-6.4));   
    printf("Ceil: %f\n",ceil(-6.4));
    printf("Other: %f\n",ceil(-fabs(-8+floor(-5.5))));

    return 0;
}