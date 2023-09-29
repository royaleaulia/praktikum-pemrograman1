#include <stdio.h>

int main()
{
    int a, b, x, y;
    printf("Masukan Nilai A: ");
    scanf("%d", &a);
    printf("Masukan Nilai B: ");
    scanf("%d", &b);
    printf("Masukan Nilai X: ");
    scanf("%d", &x);
    printf("Masukan Nilai Y: ");
    scanf("%d", &y);
    int hasilbagiab = a % b;
    int hasilbagixy = x % y;
    int jumlah = hasilbagiab + hasilbagixy;
    printf("Total sisa hasil bagi dari %d dibagi %d dan %d dibagi %d adalah %d", a, b, x, y, jumlah);
    return 0;
}