#include <stdio.h>
int main()
{

    int k = 64;
    int c;
    for (int i = 1; i <= 5; i++)
    {

        k = k + 2 * (i - 1) + 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6 - i)
            {
                printf("%c", k--);
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