#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, miring;

    printf("Masukkan sisi alas: ");
    scanf("%f", &alas);

    printf("Masukkan sisi tinggi: ");
    scanf("%f", &tinggi);

    miring = sqrt(alas * alas + tinggi * tinggi);

    printf("Sisi miring segitiga siku-siku adalah %.2f cm\n", miring);

    return 0;
}