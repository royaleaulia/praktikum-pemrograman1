#include <stdio.h>

int main() {
    char name[100], nim[20], kelas_paralel[10], ttl[50], alamat[100], hobby[100], no_hp[15];

    printf("Nama\t\t\t: ");
    scanf("%99[^\n]%*c", name);

    printf("NIM\t\t\t: ");
    scanf("%19[^\n]%*c", nim);

    printf("Kelas Paralel\t\t: ");
    scanf("%9[^\n]%*c", kelas_paralel);

    printf("Tempat/Tanggal Lahir\t: ");
    scanf("%49[^\n]%*c", ttl);

    printf("Alamat\t\t\t: ");
    scanf("%99[^\n]%*c", alamat);

    printf("Hobby\t\t\t: ");
    scanf("%99[^\n]%*c", hobby);

    printf("No HP\t\t\t: ");
    scanf("%14[^\n]%*c", no_hp);

    printf("\nOutput\n");
    printf("Nama\t\t\t: %s\n", name);
    printf("NIM\t\t\t: %s\n", nim);
    printf("Kelas Paralel\t\t: %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir\t: %s\n", ttl);
    printf("Alamat\t\t\t: %s\n", alamat);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("Nomor HP\t\t: %s\n", no_hp);

    return 0;
}
