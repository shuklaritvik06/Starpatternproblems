#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        char k = 'A';
        for (int j = 1; j <= 8; j++)
        {
            if (j >= 5 - i && j <= 4 + i)
            {

                if (j == 5)
                {
                    k = '1';
                }
                printf("%c", k);

                k++;
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