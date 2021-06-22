#include <stdio.h>
int main()
{
    int k = 1;
    int l = 7;
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == k)
            {
                printf("\\");
            }
            else if (j == l)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        k++;
        l--;
        printf("\n");
    }

    return 0;
}