#include <stdio.h>

int main()
{
    // Deklarasi variabel untuk menyimpan panjang, lebar dan luas
    int panjang = 10; // Panjang dalam cm
    int lebar = 7; // Lebar dalam cm
    int luas; // Luas dalam cm^2

    // Menghitung luas dengan rumus luas = panjang * lebar
    luas = panjang * lebar;

    // Cetak luas ke layar dengan format tertentu
    printf("Luas persegi panjang dengan panjang %d cm dan lebar %d cm adalah %d cm^2\n", panjang, lebar, luas);

    return 0;
}