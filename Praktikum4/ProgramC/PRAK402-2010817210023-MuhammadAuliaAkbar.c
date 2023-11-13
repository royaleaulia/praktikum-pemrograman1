#include <stdio.h>

int main()
{
    int input;
    int i, j;
    printf("Input: ");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
        else
        {
            continue;
        }
    }
    printf("\n");
    for (j = input; j > 0; j--)
    {
        if (j % 2 == 0)
        {
            printf("%d ", j);
        }
        else
        {
            continue;
        }
    }
    return 0;
}