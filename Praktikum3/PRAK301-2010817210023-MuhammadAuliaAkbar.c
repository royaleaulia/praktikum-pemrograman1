#include <stdio.h>

int main() {
    int angka1, angka2, angka3;

    printf("Masukkan tiga angka acak: ");
    scanf("%d %d %d", &angka1, &angka2, &angka3);

    int min_angka, mid_angka, max_angka;

    if (angka1 <= angka2 && angka1 <= angka3) {
        min_angka = angka1;
        if (angka2 <= angka3) {
            mid_angka = angka2;
            max_angka = angka3;
        } else {
            mid_angka = angka3;
            max_angka = angka2;
        }
    } else if (angka2 <= angka1 && angka2 <= angka3) {
        min_angka = angka2;
        if (angka1 <= angka3) {
            mid_angka = angka1;
            max_angka = angka3;
        } else {
            mid_angka = angka3;
            max_angka = angka1;
        }
    } else {
        min_angka = angka3;
        if (angka1 <= angka2) {
            mid_angka = angka1;
            max_angka = angka2;
        } else {
            mid_angka = angka2;
            max_angka = angka1;
        }
    }

    printf("Hasil pengurutan: %d %d %d\n", min_angka, mid_angka, max_angka);

    return 0;
}