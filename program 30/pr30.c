#include <stdio.h>

int main() {
    int n, i, j;
    float temp;
    float *ptr;


    printf("Enter the number of items: ");
    scanf("%d", &n);

    float prices[n];
    ptr = prices;


    printf("Enter the prices of items:\n");
    for (i = 0; i < n; i++) {
        printf("Price of item %d: ", i + 1);
        scanf("%f", (ptr + i));
    }


    for (i = 0; i < n-1 ; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {

                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }


    printf("\nPrices in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

