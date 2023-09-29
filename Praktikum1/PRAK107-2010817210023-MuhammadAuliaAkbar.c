#include <stdio.h>

int main()
{
    int sisia, sisib, sisic;
    printf("Masukan Nilai A: ");
    scanf("%d", &sisia);
    printf("Masukan Nilai B: ");
    scanf("%d", &sisib);
    printf("Masukan Nilai C: ");
    scanf("%d", &sisic);

    int keliling = sisia + sisib + sisic;
    int hargatanahpermeter = 85000;
    int biayapagar = keliling * hargatanahpermeter;
    printf("Panjang Sisi berturut turut adalah %d, %d, %d\n", sisia, sisib, sisic);
    printf("Keliling Tanah Pak Dengklek Adalah %d\n", keliling);
    printf("Harga tanah Permeter Adalah %d\n", hargatanahpermeter);
    printf("Jawaban:\n");
    printf("Biaya yang Diperlukan pak Dengklek Adalah : %d", biayapagar);

    return 0;
}