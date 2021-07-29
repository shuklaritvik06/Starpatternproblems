#include <stdio.h>
int main()
{
    int k = 7;
    for (int i = 1; i <= 7; i++)
    {
        int l = 7 - i;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 1 && j <= k)
            {
                printf("%d", l);
                l--;
            }
            else
            {
                printf(" ");
            }
        }
        k--;
        printf("\n");
    }
    return 0;
}