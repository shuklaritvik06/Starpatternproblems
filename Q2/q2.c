#include <stdio.h>
int main()
{

    int k = 0;
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {
            if (j >= 5 - k && j <= 5)
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

    return 0;
}