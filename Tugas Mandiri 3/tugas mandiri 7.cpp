#include <stdio.h>

int main() {
    float celsius, fahrenheit, reamur;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    reamur = celsius * 4 / 5;

    printf("%.2f derajat Celcius = %.2f derajat Fahrenheit\n", celsius, fahrenheit);
    printf("%.2f derajat Celcius = %.2f derajat Reamur\n", celsius, reamur);

    return 0;
}