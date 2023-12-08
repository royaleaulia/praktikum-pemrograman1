#include <stdio.h>

int main(){
    int nInput;
    scanf("%d", &nInput);
    int inputke[nInput];


    for(int i = 1; i <= nInput; i++){
        scanf("%d", &inputke[i-1]);
    }

    for(int i = 1; i <= nInput; i++){
        printf("%d ", inputke[i-1] * i);
    }

}