#include <stdio.h>

int maxProfit(int prices[], int n)
{
    if (n <= 1) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
        {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main()
{

    int prices1[] = {20, 25, 15, 30, 10, 50};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);
    printf("Max Profit (Test 1): %d\n", maxProfit(prices1, n1));


    int prices2[] = {10, 8, 6, 4, 2};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);
    printf("Max Profit (Test 2): %d\n", maxProfit(prices2, n2));


    int prices3[] = {100, 180, 260, 310, 40, 535, 695};
    int n3 = sizeof(prices3) / sizeof(prices3[0]);
    printf("Max Profit (Test 3): %d\n", maxProfit(prices3, n3));


    int prices4[] = {30, 20, 25, 40, 25, 50, 35};
    int n4 = sizeof(prices4) / sizeof(prices4[0]);
    printf("Max Profit (Test 4): %d\n", maxProfit(prices4, n4));


    int prices5[] = {5, 5, 5, 5, 5};
    int n5 = sizeof(prices5) / sizeof(prices5[0]);
    printf("Max Profit (Test 5): %d\n", maxProfit(prices5, n5));

    return 0;
}
