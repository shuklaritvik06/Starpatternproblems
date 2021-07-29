#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 4; i++)
    {
        char s = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%c", s);
            }
            else
            {
                printf(" ");
            }
            s++;
        }
        printf("\n");
    }

    return 0;
}