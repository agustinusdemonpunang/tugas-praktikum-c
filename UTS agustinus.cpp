#include <stdio.h>
#include <unistd.h>

int main() {
    int ntu_levels[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
    int kecepatan_motor[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int waktu_cuci[] = {60, 60, 60, 60, 60, 60, 60, 60, 60};
    int ntu, i;

    printf("Masukkan level kekeruhan air (NTU):");
    scanf("%d", &ntu);
    
    int selected_level = -1;
    for (i = 0; i < sizeof(ntu_levels) / sizeof(ntu_levels[0]); ++i) {
        if (ntu <= ntu_levels[i]) {
            selected_level = i;
            break;
        }
    }
    
    if (selected_level != -1) {
        printf("Mesin cuci akan mencuci pada level kekeruhan air %d (NTU).\n", ntu_levels[selected_level]);
        printf("Mengaktifkan motor listrik dengan kecepatan %d rpm...\n", kecepatan_motor[selected_level]);
        
        printf("Membuka klep pembuangan air kotor...\n");
       
        printf("Memulai pencucian...\n");
        sleep(waktu_cuci[selected_level] * 60); // Menunggu selama waktu mencuci dalam detik
        printf("Cucian selesai. Mengeringkan cucian...\n");
        
        printf("Cucian telah selesai dan kering.\n");
    } else {
        printf("Tidak ada level kekeruhan air yang sesuai. Mesin cuci tidak dapat diaktifkan.\n");
    }
    
    return 0;
}
