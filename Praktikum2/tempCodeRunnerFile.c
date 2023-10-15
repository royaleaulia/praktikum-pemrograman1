#include <stdio.h>

int main()
{
    char name[100], nim[20], kp[100], ttl[20], alamat[100], hobby[20], nohp[20];

    printf("Input\n");
    printf("name \t\t\t: ");
    gets(name);
    printf("NIM \t\t\t: ");
    gets(nim);
    printf("Kelas Paralel \t\t: ");
    gets(kp);
    printf("Tempat/Tanggal Lahir \t: ");
    gets(ttl);
    printf("Alamat \t\t\t: ");
    gets(alamat);
    printf("Hobby \t\t\t: ");
    gets(hobby);
    printf("No HP \t\t\t: ");
    gets(nohp);

    printf("Output\n");
    printf("Nama \t\t\t: %s\n", name);
    printf("NIM \t\t\t: %s\n", nim);
    printf("Kelas Paralel \t\t: %s\n", kp);
    printf("Tempat/Tanggal Lahir \t: %s\n", ttl);
    printf("Alamat \t\t\t: %s\n", alamat);
    printf("Hobby \t\t\t: %s\n", hobby);
    printf("Nomor HP \t\t: %s\n", nohp);
    return 0;
}