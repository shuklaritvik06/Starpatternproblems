#include <stdio.h>
int main()
{
    int k;

    for (int i = 0; i <= 4; i++)
    {
        k = 49;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%c", k);
                k++;
                if (j == 4)
                {
                    k = 65;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}