#include<stdio.h>
int main()
{
    float marks;
    printf("enter your marks :\n");
    scanf("%f",&marks);
    if(marks>=90)
    {
        printf("Grade A \n");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade B \n");
    }
     else if(marks>=70 && marks<80)
    {
        printf("Grade C \n");
    }
     else if(marks>=60 && marks<70)
    {
        printf("Grade D \n");
    }
     else if(marks<60)
    {
        printf("Grade F \n");
    }
    else
    {
        printf("invalid input , enter your marks between 0-100");
    }
    printf("this program is done by Yati Soliya_25TCEXVD");
    return 0 ;
}
