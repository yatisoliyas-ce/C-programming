#include<stdio.h>
int main()
{
    int vertical,horizontal;
    printf("Enter the size of the table vertically: ");
    scanf("%d",&vertical);
    printf("Enter the size of the table horizontally: ");
    scanf("%d",&horizontal);
    printf("Multiplication Table (%d x %d):\n", vertical, horizontal);
    {
        for (int i = 1; i <= vertical; i++)
        {
            for (int j = 1; j <= horizontal; j++)
            {
                printf("%4d", i * j);
            }
            printf("\n");
        }

    }

    return 0;
}
