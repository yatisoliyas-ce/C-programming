#include<stdio.h>
int main()
{
    int age;
    printf("Enter customer's age:");
    scanf("%d", &age);
    if (age<0 || age>120)
    {
        printf("Invalid age. Enter a valid age between 0 and 120.\n");
    }
    else if (age<18)
    {
        printf("Not eligible to open a savings account.\n");
    }
    else if (age >=18 && age<60)
    {
        printf("Eligible for regular savings account.\n");
    }
    else
    {
        printf("Eligible for senior citizen savings account.\n");
    }

    printf("this program is done by Yati Soliya_25TCEXVD");
    return 0;
}
