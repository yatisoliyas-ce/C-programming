#include<stdio.h>
int main()
{
    int arr[25];
    int cp=0;
    int ce=0;
    int co=0;
    int cn=0;
    int i;
    printf("enter 25 numbers");
    for(i=0;i<25;i++)
    {
        printf("Enter arr[%d] = ", i);
         scanf("%d",&arr[i]);
        if(arr[i]>=0)
        {
            cp++;
        }
        if(arr[i]<0)
        {
            cn++;
        }
        if(arr[i]%2==0)
        {
            ce++;
        }
        if(arr[i]%2!=0)
        {
            co++;
        }

    }
    printf("Total positive numbers: %d\n", cp);
    printf("Total negative numbers: %d\n", cn);
    printf("Total even numbers: %d\n", ce);
    printf("Total odd numbers: %d\n", co);

    return 0;
}
