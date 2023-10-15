#include <stdio.h>
#include <math.h>

int main()
{
    float tinggi, jari2, volume, luas, keliling;
    scanf("%f", &jari2);
    scanf("%f", &tinggi);

    volume = M_PI * (jari2 * jari2) * tinggi;
    luas = 2 * M_PI * jari2 * (jari2 + tinggi);
    keliling = 2 * M_PI * jari2;

    printf("\nVolume = %.2f", volume);
    printf("\nVolume = %.2f", luas);
    printf("\nVolume = %.2f", keliling);

    return 0;
}