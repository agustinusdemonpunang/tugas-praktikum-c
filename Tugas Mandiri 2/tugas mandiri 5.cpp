#include <stdio.h>
#include <math.h>

int main() {
    float a = 4.0;
    float b = 5.0;
    float c = sqrt(pow(a, 2) + pow(b, 2));
    
    printf("Panjang sisi miring segitiga siku-siku adalah %.2f cm\n", c);
    
    return 0;
}