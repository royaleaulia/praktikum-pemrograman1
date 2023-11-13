#include <stdio.h>

int main()
{
    int input1, input2;
    printf("Input: ");
    scanf("%d %d", &input1, &input2);

    if (input1 < input2)
    {
        int batas = input2;
        while (input1 <= batas)
        {
            if (input1 == batas)
            {
                printf("%d %d", input1, input2);
            }
            else
            {
                printf("%d %d - ", input1, input2);
            }
            input1++;
            input2--;
        }
    }
    else if (input1 > input2)
    {
        int batas = input1;
        while (input2 <= batas)
        {
            if (input2 == batas)
            {
                printf("%d %d", input1, input2);
            }
            else
            {
                printf("%d %d - ", input1, input2);
            }
            input1--;
            input2++;
        }
    }
    else
    {
        printf("The two numbers are equal");
    }
    return 0;
}