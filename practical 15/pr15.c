#include<stdio.h>
int main()
{
    int seconds;
    printf("enter the number of seconds - ");
    scanf("%d",&seconds);
    if(seconds>=0)
    {
        while(seconds>0)
        {
        printf("%d\n",seconds);
        sleep(1);
        seconds--;
        }
    }
    else
    {
        printf("enter a valid non zero number");
    }
    printf("countdown completed");
    return 0;
}
