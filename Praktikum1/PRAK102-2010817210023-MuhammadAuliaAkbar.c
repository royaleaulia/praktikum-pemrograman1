#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Masukan Nilai A: ");
    scanf("%f", &a);
    printf("Masukan Nilai B: ");
    scanf("%f", &b);
    printf("Masukan Nilai C: ");
    scanf("%f", &c);
    float jumlah = a * b / c;
    printf("Hasil dari %.0f dikali %.0f dibagi %.0f adalah %f", a, b, c, jumlah);
    return 0;
}