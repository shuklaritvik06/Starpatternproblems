#include <stdio.h>
int main()
{
    int k = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 5 - k || j >= 5 + k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        k++;
        printf("\n");
    }
    int q = 2;
    int l = 8;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j <= q)
            {
                printf("*");
            }
            else if (j >= l)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        q++;
        l--;
        printf("\n");
    }

    return 0;
}