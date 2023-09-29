#include <stdio.h>
#include <math.h>

int main()
{
    float alas, tinggi, sisiA, sisiB, sisiC, keliling, luas;
    printf("Alas (Menggunakan cm): ");
    scanf("%f", &alas);
    printf("Tinggi (Menggunakan): ");
    scanf("%f", &tinggi);

    printf("Jawab : \n");
    sisiA = tinggi;
    sisiB = sqrt(alas * alas + tinggi * tinggi);// Menggunakan Teorema Pythagoras
    sisiC = alas;
    keliling = sisiA + sisiB + sisiC;
    luas = 0.5 * alas * tinggi;

    printf("Sisi A = %.2f cm\n", sisiA);
    printf("Sisi B = %.2f cm\n", sisiB);
    printf("Sisi C = %.2f cm\n", sisiC);
    printf("Keliling = %.2f cm\n", keliling);
    printf("Luas = %.2f cm\n", luas);

    return 0;
}