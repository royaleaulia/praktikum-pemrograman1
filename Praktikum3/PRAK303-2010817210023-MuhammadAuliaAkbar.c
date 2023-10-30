#include <stdio.h>

int main() {
    int N;

    printf("Input: ");
    scanf("%d", &N);

    printf("Output: ");
    if (N > 0) {
        printf("Positif\n");
    } else if (N < 0) {
        printf("Negatif\n");
    } else {
        printf("Nol\n");
    }

    return 0;
}