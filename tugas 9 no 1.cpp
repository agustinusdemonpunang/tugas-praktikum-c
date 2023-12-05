#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, i, ada = 0;

    // Menampilkan isi array
    printf("Isi array:\n");
    for (i = 0; i < 11; i++) {
        printf("%d\n", A[i]);
    }

    // Input nilai integer N
    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);

    // Mengecek apakah N ada di dalam array
    printf("Hasil: ");
    for (i = 0; i < 11; i++) {
        if (A[i] == N) {
            ada = 1;
            printf("ADA\nLokasi bilangan yang sama:\n");
            break;
        }
    }

    // Menampilkan lokasi (index) bilangan yang sama dengan N
    if (ada) {
        for (i = 0; i < 11; i++) {
            if (A[i] == N) {
                printf("%d\n", i);
            }
        }
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}