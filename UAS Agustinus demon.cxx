#include <stdio.h>
#include <unistd.h>

// Definisikan konstanta untuk level kekeruhan air
#define LEVELS_COUNT 9
int levels[LEVELS_COUNT] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Definisikan konstanta untuk motor
#define MAIN_MOTOR 1
#define WATER_INLET_MOTOR 2
#define WATER_OUTLET_MOTOR 3

// Fungsi fuzzy untuk menentukan kecepatan dan waktu pencucian berdasarkan level kekeruhan air
void fuzzyLogic(int level, int *speed, int *washTime) {
    if (level <= 8) {
        *speed = 3;
        *washTime = 5;
    } else if (level <= 18) {
        *speed = 2;
        *washTime = 7;
    } else if (level <= 36) {
        *speed = 1;
        *washTime = 10;
    } else {
        *speed = 1;
        *washTime = 12;
    }
}

// Fungsi untuk mengaktifkan motor
void activateMotor(int motor, int duration) {
    printf("Motor %d aktif selama %d menit\n", motor, duration);
    // Simulasi aktivasi motor dengan sleep
    sleep(duration * 60);
    printf("Motor %d non-aktif\n", motor);
}

// Fungsi utama
int main() {
    int turbidityLevel;
    printf("Masukkan level kekeruhan air: ");
    scanf("%d", &turbidityLevel);

    // Periksa apakah nilai kekeruhan air valid
    if (turbidityLevel < levels[0] || turbidityLevel > levels[LEVELS_COUNT - 1]) {
        printf("Level kekeruhan air tidak valid.\n");
        return 1;
    }

    // Temukan range level kekeruhan air
    int lowerLevel = 0;
    int upperLevel = LEVELS_COUNT - 1;
    while (lowerLevel < upperLevel) {
        int mid = (lowerLevel + upperLevel) / 2;
        if (turbidityLevel <= levels[mid]) {
            upperLevel = mid;
        } else {
            lowerLevel = mid + 1;
        }
    }

    // Tentukan kecepatan dan waktu pencucian dengan fuzzy logic
    int speed, washTime;
    fuzzyLogic(levels[lowerLevel], &speed, &washTime);

    // Aktifkan motor utama
    activateMotor(MAIN_MOTOR, washTime);

    // Jeda selama 2 menit
    printf("Jeda selama 2 menit\n");
    sleep(2 * 60);

    // Aktifkan motor pembuka klep pembuangan air
    activateMotor(WATER_OUTLET_MOTOR, 3);

    // Jeda selama 3 menit
    printf("Jeda selama 3 menit untuk mengeringkan cucian\n");
    sleep(3 * 60);

    // Selesai
    printf("Proses pencucian selesai.\n");

    return 0;
}