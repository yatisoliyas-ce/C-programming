#include <stdio.h>

int main()
{
    int N, i, id;
    int sum = 0, expectedSum;

    printf("Enter total number of participants (N): ");
    scanf("%d", &N);

    printf("Enter %d participant IDs (from 1 to %d):\n", N - 1, N);
    for (i = 0; i < N - 1; i++)
        {
        scanf("%d", &id);
        sum += id;
       }

    expectedSum = N * (N + 1) / 2;

    printf("Missing Participant ID is: %d\n", expectedSum - sum);

    return 0;
}
