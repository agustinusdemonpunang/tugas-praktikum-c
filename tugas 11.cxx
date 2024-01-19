#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, countB = 0, countC = 0;

    // Calculate the average
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    float average = (float)sum / 12;

    // Move values to B or C based on the conditions
    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[countB++] = A[i];
        } else {
            C[countC++] = A[i];
        }
    }

    // Display the contents of arrays A, B, and C
    printf("Array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }

    printf("\nArray B: ");
    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }

    printf("\nArray C: ");
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}