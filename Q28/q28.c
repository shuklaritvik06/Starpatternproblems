#include <stdio.h>
int main()
{
    int n = 11, m = 0;
    int k;
    for (int i = 1; i <= 21; i++)
    {
        i <= n ? m++ : m--;
        k = m - 1;
        for (int j = 1; j <= 21; j++)
        {
            if (j >= n + 1 - m && j <= n - 1 + m)
            {
                printf("%d", j < n ? k++ % 10 : k--);
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