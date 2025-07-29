#include<stdio.h>
#define ticket 100
int main()
{

    int age;
    printf("enter your age");
    scanf("%d",&age);
    if (age<12)
    {
        printf("you are eligible for free entry");
    }
    else
    {
        printf("per person the price of ticket = %d\n",ticket);
        int adult;
        printf("enter the number of adults \n");
        scanf("%d",&adult);
        int entryfee= adult*ticket;
        printf("you have to pay %d\n",entryfee);
        scanf("%d",&entryfee);
    }
    return 0;
}
