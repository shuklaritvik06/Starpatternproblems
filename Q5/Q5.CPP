//As you can see in the question that * is printed after leaving one space everytime so we have to take the help of the counter
#include <iostream>
int main()
{
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        k = 1;
        printf("\n");
    }

    return 0;
}