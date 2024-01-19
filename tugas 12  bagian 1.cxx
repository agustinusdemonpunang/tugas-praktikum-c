#include <stdio.h>

int main() {
    char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int hasDuplicate = 0;

    for (int i = 0; A[i] != '\0'; i++) {
        for (int j = i + 1; A[j] != '\0'; j++) {
            if (A[i] == A[j]) {
                hasDuplicate = 1;
                printf("ADA\nHuruf yang sama: %c\n", A[i]);
            }
        }
    }

    if (!hasDuplicate) {
        printf("TIDAK ADA\n");
    }

    return 0;
}