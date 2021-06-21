#include <iostream>
int main()
{

    int k = 2;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    for (int i = 5; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 4 - k && j <= 4 + k)
            {
                printf("*");
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
