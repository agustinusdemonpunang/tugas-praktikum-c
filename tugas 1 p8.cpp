#include <stdio.h>

int main() {
    // Deklarasi array A dengan ukuran 11
    int A[11];
    
    // Data yang akan diinput, 999 sebagai end of data
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    
    // Inisialisasi indeks array A
    int indeks_A = 0;

    // Penginputan data ke dalam array A (hanya data yang lebih besar dari 9)
    printf("a. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] > 9) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    // Reset indeks_A
    indeks_A = 0;

    // Penginputan data ke dalam array A (hanya data yang lebih besar dari 9)
    printf("b. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] > 9) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    // Reset indeks_A
    indeks_A = 0;

    // Penginputan data ke dalam array A (hanya data yang lebih besar dari 9)
    printf("c. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] > 9) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    // Reset indeks_A
    indeks_A = 0;

    // Penginputan data ke dalam array A (hanya nilai yang ganjil, nilai 999 tidak disimpan)
    printf("d. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] % 2 != 0) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    // Reset indeks_A
    indeks_A = 0;

    // Penginputan data ke dalam array A (hanya nilai yang ganjil, nilai 999 tidak disimpan)
    printf("e. A ");
    for (int i = 0; i < sizeof(data) / sizeof(data[0]) && data[i] != 999; ++i) {
        if (data[i] % 2 != 0) {
            A[indeks_A] = data[i];
            printf("%d ", A[indeks_A]);
            indeks_A++;
        }
    }
    printf("\n");

    return 0;
}
