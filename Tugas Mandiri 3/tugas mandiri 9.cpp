#include <stdio.h>

int main() {
    int num;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d adalah bilangan genap.\n", num);
    } else {
        printf("%d adalah bilangan ganjil.\n", num);
    }

    return 0;
}