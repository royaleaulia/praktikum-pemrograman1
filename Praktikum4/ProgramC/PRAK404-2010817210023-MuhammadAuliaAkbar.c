#include <stdio.h>
int main()
{
    int pilInputan;
    float hasil, nPertama, nKedua;
    do
    {
        printf("\n\n\nPilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukan Pilihan: ");
        scanf("%d", &pilInputan);

        switch (pilInputan)
        {
        case 1:
            printf("Masukan nilai pertama: ");
            scanf("%f", &nPertama);
            printf("Masukan nilai kedua: ");
            scanf("%f", &nKedua);
            hasil = nPertama + nKedua;
            printf("Hasil Penjumlahan antara %.0f dengan %.0f adalah %.0f", nPertama, nKedua, hasil);
            break;
        case 2:
            printf("Masukan nilai pertama: ");
            scanf("%f", &nPertama);
            printf("Masukan nilai kedua: ");
            scanf("%f", &nKedua);
            hasil = nPertama - nKedua;
            printf("Hasil Pengurangan antara %.0f dengan %.0f adalah %.0f", nPertama, nKedua, hasil);
            break;
        case 3:
            printf("Masukan nilai pertama: ");
            scanf("%f", &nPertama);
            printf("Masukan nilai kedua: ");
            scanf("%f", &nKedua);
            hasil = nPertama * nKedua;
            printf("Hasil Perkalian antara %.0f dengan %.0f adalah %.0f", nPertama, nKedua, hasil);
            break;
        case 4:
            printf("Masukan nilai pertama: ");
            scanf("%f", &nPertama);
            printf("Masukan nilai kedua: ");
            scanf("%f", &nKedua);
            hasil = nPertama / nKedua;
            printf("Hasil Pembagian antara %.0f dengan %.0f adalah %.2f", nPertama, nKedua, hasil);
            break;
        case 5:
            printf("Program telah berakhir...\n");
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Aulia Akbar");
            break;
        default:
            printf("Input anda salah, silahkan coba lagi");
            break;
        }
    } while (pilInputan != 5);

    return 0;
}