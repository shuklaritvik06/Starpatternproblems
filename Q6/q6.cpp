#include <iostream>
int main()
{
    int z = 0;
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 9; j++)
        {
            if (j <= 5 - z || j >= 5 + z)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        z++;
        printf("\n");
    }

    return 0;
}