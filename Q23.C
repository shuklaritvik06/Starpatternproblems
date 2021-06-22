#include <stdio.h>
int main()
{
    int k = 1, l = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == k || j == l)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        k++, l--;
        printf("\n");
    }

    return 0;
}