#include <stdio.h>

int main()
{
    float a, b, x, y;
    printf("Masukan Nilai A: ");
    scanf("%f", &a);
    printf("Masukan Nilai B: ");
    scanf("%f", &b);
    printf("Masukan Nilai X: ");
    scanf("%f", &x);
    printf("Masukan Nilai Y: ");
    scanf("%f", &y);
    float jumlah = (a + b) * x / y;
    printf("Hasil dari %.0f ditambah %.0f dikali %.0f dan dibagi %.0f adalah %.2f", a, b, x, y, jumlah);
    return 0;
}
