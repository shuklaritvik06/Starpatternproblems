#include <stdio.h>
int main()
{
    int k = 0;

    for (int i = 1; i <= 5; i++)
    {
        int l = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 5 - k && j <= 5)
            {
                printf("%d", l);
                l++;
            }
            else
            {
                printf(" ");
            }
        }
        k++;
        printf("\n");
    }
    int z = 2;
    for (int i = 1; i <= 4; i++)
    {
        int l = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= z && j <= 5)
            {
                printf("%d", l);
                l++;
            }
            else
            {
                printf(" ");
            }
        }
        z++;
        printf("\n");
    }

    return 0;
}