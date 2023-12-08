#include <stdio.h>

int main()
{
    int n;

    // Input ordo matriks
    scanf("%d", &n);

    int A[n][n], B[n][n], hasil[n][n];

    // Input matriks A
    printf("Masukkan elemen matriks A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matriks B
    printf("Masukkan elemen matriks B:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Perkalian matriks A dan B
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            hasil[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                hasil[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Menampilkan hasil perkalian
    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}
