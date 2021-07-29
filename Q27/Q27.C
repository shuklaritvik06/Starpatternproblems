#include <stdio.h>
int main()
{
    int line, j, i, k, num;
    char alpha;
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        k = 1;
        alpha = 'A';
        num = 1;
        for (int j = 1; j <= 2 * line - 1; j++)
        {
            if (j >= line + 1 - i && j <= line - 1 + i)
            {
                if (k)
                {
                    if (i % 2 == 0)
                        printf("%c", alpha++);
                    else
                        printf("%d", num++);
                }
                else
                {
                    printf(" ");
                }
                k = 1 - k;
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