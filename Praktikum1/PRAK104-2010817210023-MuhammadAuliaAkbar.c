#include <stdio.h>

int main()
{
    float hargasepatuA, hargasepatuB;
    float diskon13 = 13;
    float diskon21 = 21;
    printf("Masukan Harga Sepatu A: ");
    scanf("%f", &hargasepatuA);
    printf("Masukan Harga Sepatu B: ");
    scanf("%f", &hargasepatuB);

    float diskonsepatuA13persen = hargasepatuA - (hargasepatuA * (diskon13 / 100));
    float diskonsepatuB21persen = hargasepatuB - (hargasepatuB * (diskon21 / 100));
    printf("Sepatu A Mendapat Diskon %.0f Sehingga Harganya Menjadi %.0f\n", diskon13, diskonsepatuA13persen);
    printf("Sepatu B Mendapat Diskon %.0f Sehingga Harganya Menjadi %.0f", diskon21, diskonsepatuB21persen);
    return 0;
}