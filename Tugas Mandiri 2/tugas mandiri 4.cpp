#include <stdio.h>
#include <math.h>

int main() {
    float diameter = 15.0;
    float radius = diameter / 2.0;
    float pi = M_PI;
    float volume = (4.0 / 3.0) * pi * pow(radius, 3);
    
    printf("Volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter, volume);
    
    return 0;
}