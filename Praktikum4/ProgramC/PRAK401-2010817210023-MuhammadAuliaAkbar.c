#include <stdio.h>

void main()
{
    int inputKe;
    char Huruf;
    scanf("%d %c", &inputKe, &Huruf);

    for (int i = 1; i < 50; i++)
    {
        if (i % inputKe == 0)
        {
            printf("%c ", Huruf);
            continue;
        }
        else
        {
            printf("%d ", i);
        }
        
    }
}