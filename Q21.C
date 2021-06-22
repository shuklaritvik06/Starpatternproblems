#include <stdio.h>
int main()
{

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (j >= 1 && j <= i)
            {
                if (j % 2 != 0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
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