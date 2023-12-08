#include <stdio.h>

int main()
{
    int baris, kolom;
    printf("Masukan Ukuran Matriks (Baris x Kolom): ");
    scanf("%d %d", &baris, &kolom);
    int Matriks[baris][kolom];

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            scanf("%d", &Matriks[i][j]);
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("%d ", Matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}