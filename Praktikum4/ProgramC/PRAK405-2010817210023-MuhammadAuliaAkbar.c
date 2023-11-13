#include <stdio.h>

int main()
{
    int n, kelipatan, hasilpbaris;
    int hasil = 0;
    int hasilakhir = 0;
    printf("Banyaknya N dan Kelipatan: ");
    scanf("%d"
          "%d",
          &n, &kelipatan);
    for (int i = 1; i <= n; i++)
    {
        hasilpbaris = i * kelipatan;
        hasil += hasilpbaris;
        if (i == 1)
        {
            printf("%d * %d = %d\n", i, kelipatan, hasilpbaris);
        }
        else
        {
            printf("(%d * %d) + (%d * %d) = %d\n", i, kelipatan, i - 1, kelipatan, hasil);
        }
        hasilakhir += hasil;
    }

    printf("%d", hasilakhir);
}