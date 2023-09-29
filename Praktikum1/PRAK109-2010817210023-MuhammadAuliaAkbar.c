#include <stdio.h>

int main()
{
    int jmlhpasukanyuzhong, jmlhpahlawan;
    printf("Jumlah Pasukan Yang Dibawa Yuzhong : ");
    scanf("%d", &jmlhpasukanyuzhong);
    printf("Jumlah Pahlawan : ");
    scanf("%d", &jmlhpahlawan);
    int bagipasukan = jmlhpasukanyuzhong / jmlhpahlawan;

    printf("Jumlah Pasukan Yang Dibawa Yuzhong : %d\n", jmlhpasukanyuzhong);
    printf("Jumlah Pahlawan : %d\n", jmlhpahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", bagipasukan);

    return 0;
}