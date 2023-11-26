#include <stdio.h>
//Buatlah Function Disini
int MaxBilangan(int a, int b, int c, int d){
    int terbesar = a;
    if (b > terbesar){
        terbesar = b;
    }
    if (c > terbesar){
        terbesar = c;
    }
    if (d > terbesar){
        terbesar = d;
    }
    return terbesar;
}

int main() {
    int a, b, c, d; 
    printf("Input: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("Output: %d", hasil); 
    return 0;
}
