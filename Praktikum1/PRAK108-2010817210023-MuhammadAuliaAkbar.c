#include <stdio.h>
#include <math.h>

int main()
{
    float putaran, jaraktempuh;
    printf("Masukan Pak Dengklek Mengelilingi Tanaman : ");
    scanf("%f", &putaran);
    printf("Masukan Jarak Tempuh Pak Denglek (Satuan Kilometer) : ");
    scanf("%f", &jaraktempuh);
    float kelilingaslilingkaran = jaraktempuh / putaran;
    float jarijari = kelilingaslilingkaran / (2 * M_PI);

    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jaraktempuh);
    printf("Jawaban \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jarijari);

    return 0;
}