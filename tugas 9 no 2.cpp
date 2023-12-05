#include <iostream>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char inputChar;
    int count = 0;

    std::cout << "Masukkan karakter: ";
    std::cin >> inputChar;

    for (int i = 0; i < 10; i++) {
        if (A[i] == inputChar) {
            count++;
        }
    }

    if (count > 0) {
        std::cout << "ADA\n";
        std::cout << count << std::endl;
    } else {
        std::cout << "TIDAK ADA\n";
    }

    return 0;
}