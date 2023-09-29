#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Masukan Nilai X: ");
    scanf("%d", &x);
    printf("Masukan Nilai Y: ");
    scanf("%d", &y);
    printf("Masukan Nilai Z: ");
    scanf("%d", &z);

    int jumlah = x + y + z;

    printf("Jumlah Variabel Tersebut Adalah %d", jumlah);
    return 0;
}