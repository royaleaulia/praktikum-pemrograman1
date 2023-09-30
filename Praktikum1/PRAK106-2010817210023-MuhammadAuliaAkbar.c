#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Masukan Nilai A: ");
    scanf("%d", &a);
    printf("Masukan Nilai B: ");
    scanf("%d", &b);
    printf("Masukan Nilai C: ");
    scanf("%d", &c);

    int apakah_a_sama_dengan_b = a == b;       // 0 (False)
    int apakah_b_lebih_besar_dari_c = b > c;   // 1 (True)
    int apakah_a_tidak_sama_dengan_c = a != c; // 1 (True)

    printf("Apakah a sama dengan b? jawabannya adalah %d\n", apakah_a_sama_dengan_b);
    printf("Apakah b lebih besar dari c? jawabannya adalah %d\n", apakah_b_lebih_besar_dari_c);
    printf("Apakah a tidak sama dengan c? jawabannya adalah %d\n", apakah_a_tidak_sama_dengan_c);

    return 0;
}