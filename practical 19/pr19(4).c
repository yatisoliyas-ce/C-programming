#include <stdio.h>

int main() {
    int i, j, n = 5;
    char ch;
    for (i = 1; i <= n; i++)
        {

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }


        for (ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c", ch);
        }


        for (ch = 'A' + i - 2; ch >= 'A'; ch--)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
        {

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }


        for (ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c", ch);
        }


        for (ch = 'A' + i - 2; ch >= 'A'; ch--)
        {
            printf("%c", ch);
        }

        printf("\n");
    }
    return 0;
}
