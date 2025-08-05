#include<stdio.h>

int main()
{
    int amount;
    printf("enter total amount : ");
    scanf("%d",&amount);
    if(amount<=1000)
    {
        printf("no discount for total amount less than 1000\n");
        printf("total amount to be paid is %d  \n",amount);
    }
    else if(amount>1000 && amount<=5000)
    {
        printf("discount = 10%%\n",amount *10/100);
        printf("total amount to be paid after discount is %d \n",amount*(100-10)/100);
    }
    else if(amount>5000)
    {
        printf("discount = 20%%\n",amount*20/100);
        printf("total amount to be paid after discount is %d \n",amount*(100-20)/100);
    }
    else
    {
        printf("invalid input\n");
    }
    return 0;
}
