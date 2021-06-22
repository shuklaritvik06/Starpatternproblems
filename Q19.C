#include <stdio.h>
int main()
{

    int k = 4;
    int l = 8;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (j >= k && j <= l)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        k--;
        l--;
        printf("\n");
    }

    return 0;
}