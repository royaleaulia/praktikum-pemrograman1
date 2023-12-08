#include <stdio.h>

int main()
{
    int baris1, baris2;

    // Input ukuran matriks
    printf("Masukkan Ukuran Matriks (Baris x Kolom): ");
    scanf("%d %d", &baris1, &baris2);

    // Inisialisasi matriks pertama dan kedua
    int matriks1[baris1];
    int matriks2[baris2];

    if (baris1 != baris2)
    {
        printf("Jumlah Tidak Sama");
    }
    else
    {
        // Input elemen matriks pertama
        printf("Masukkan elemen matriks pertama:\n");
        for (int i = 0; i < baris1; i++)
        {
            scanf("%d", &matriks1[i]);
        }

        // Input elemen matriks kedua
        printf("Masukkan elemen matriks kedua:\n");
        for (int i = 0; i < baris2; i++)
        {
            scanf("%d", &matriks2[i]);
        }

        // Inisialisasi matriks hasil
        int hasil[baris1];

        // Melakukan perkalian matriks
        for (int i = 0; i < baris1; i++)
        {
            hasil[i] = matriks1[i] * matriks2[i];
        }

        // Menampilkan hasil
        printf("Hasil perkalian matriks:\n");
        for (int i = 0; i < baris1; ++i)
        {
            printf("%d ", hasil[i]);
        }
    }

    return 0;
}
