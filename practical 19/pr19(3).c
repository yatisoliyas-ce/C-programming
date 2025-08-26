#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {

        for (int space = 0; space < n - i; space++)
            {
            printf("  ");
            }

        for (int j = i; j >= 1; j--)
            {
            printf("%d ", j);
            }

        for (int j = 2; j <= i; j++)
            {
            printf("%d ", j);
            }

        printf("\n");
    }

    for (int i = 2; i <= n; i++)
        {

        for (int space = 0; space < n - i; space++)
        {
            printf("  ");
        }


        for (int j = i; j >= 1; j--)
            {
             printf("%d ", j);
            }


        for (int j = 2; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
