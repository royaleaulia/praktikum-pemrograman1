#include <stdio.h>

int main() {
    int num1, num2;

    printf("Input: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Output: %d %d\n", num1, num2);

    return 0;
}
