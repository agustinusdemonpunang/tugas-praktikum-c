#include <stdio.h>
#include <math.h>

int main()
{
    float a, t, luas, keliling, sisi_miring;

    printf("Masukkan panjang alas segitiga (dalam cm): ");
    scanf("%f", &a);

    printf("Masukkan tinggi segitiga (dalam cm): ");
    scanf("%f", &t);

    sisi_miring = sqrt(pow(a, 2) + pow(t, 2));
    luas = 0.5 * a * t;
    keliling = a + t + sisi_miring;

    printf("\nLuas segitiga adalah %.2f cm^2\n", luas);
    printf("Keliling segitiga adalah %.2f cm\n", keliling);

    return 0;
}