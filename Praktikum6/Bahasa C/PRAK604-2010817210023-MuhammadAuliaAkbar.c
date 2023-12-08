#include <stdio.h>
#include <string.h>

void decodeMessage(char cipher[], char message[], char decoded[], int *starCount, int *hashCount)
{
    *starCount = 0;
    *hashCount = 0;

    for (int i = 0; i < strlen(cipher); i++)
    {
        if (cipher[i] == message[i])
        {
            decoded[i] = '*';
            (*starCount)++;
        }
        else
        {
            decoded[i] = '#';
            (*hashCount)++;
        }
    }

    decoded[*starCount + *hashCount] = '\0'; // Menambahkan null terminator pada string hasil decoded
}

int main()
{
    char cipher[100], message[100], decoded[100];
    int starCount, hashCount;

    // Input cipher (kode yang dimiliki oleh Shikamaru)
    fgets(cipher, sizeof(cipher), stdin);
    cipher[strcspn(cipher, "\n")] = '\0'; // Menghilangkan newline dari input

    // Input pesan yang diterima oleh Shikamaru
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0'; // Menghilangkan newline dari input

    // Menyelesaikan masalah dengan fungsi decodeMessage
    decodeMessage(cipher, message, decoded, &starCount, &hashCount);

    // Menampilkan hasil
    printf("%s\n", decoded);
    printf("* = %d\n", starCount);
    printf("# = %d\n", hashCount);

    // Menentukan pesan asli atau palsu
    if (strlen(cipher) != strlen(message))
    {
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else if (starCount >= hashCount)
    {
        printf("Pesan Asli\n");
    }
    else
    {
        printf("Pesan Palsu\n");
    }

    return 0;
}
