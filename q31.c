#include <stdio.h>
int main()
{
    int flag, k = 0, p;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 1)
        {
            k = k + 1;
        }
        else
        {
            k--;
            k = k + i;
        }

        flag = 1;
        p = k;
        for (int j = 1; j <= 9; j++)
        {

            if (j <= 2 * i - 1)
            {
                if (flag)
                {
                    printf("%d", p);
                    if (i % 2 != 0)
                    {
                        p++;
                        k++;
                    }
                    else
                    {
                        p--;
                    }
                }
                else
                {
                    printf("*");
                }
                flag = 1 - flag;
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