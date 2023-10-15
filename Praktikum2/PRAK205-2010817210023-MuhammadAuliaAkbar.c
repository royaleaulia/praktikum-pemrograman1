#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, tinggi, alas, keliling, luas;

    scanf("%f", &a);
    scanf("%f", &b);

    c = sqrt(pow(b, 2) - pow(a, 2));

    tinggi = a;
    alas = c;
    keliling = a + b + c;
    luas = 0.5 * a * c;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);
    return 0;
}