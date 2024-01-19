#include <iostream>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];
    int indexC = 0;

    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C
    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C
    for (int i = 0; i < 7; i++) {
        if (B[i] > 10) {
            C[indexC] = B[i];
            indexC++;
        }
    }

    // Menampilkan isi array C
    std::cout << "a." << std::endl;
    for (int i = 0; i < indexC; i++) {
        std::cout << C[i] << std::endl;
    }

    // Menampilkan isi array C dengan format 2 baris
    std::cout << "b." << std::endl;
    for (int i = 0; i < indexC; i += 2) {
        std::cout << C[i] << " " << C[i+1] << std::endl;
    }

    return 0;
}
