#include <stdio.h>

int main() {
    int totalDetik, hari, jam, menit, detik;

    printf("Input: ");
    scanf("%d", &totalDetik);

    hari = totalDetik / 86400;  // 1 hari = 86400 detik
    totalDetik %= 86400;

    jam = totalDetik / 3600;   // 1 jam = 3600 detik
    totalDetik %= 3600;

    menit = totalDetik / 60;    // 1 menit = 60 detik
    detik = totalDetik % 60;

    if (hari > 0) {
        printf("Output: %d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("Output: %02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}