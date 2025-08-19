#include<stdio.h>
int  main()
{
    int min=0;
    float distance = 0;
    while(1)
    {
        printf("minute %d : distance covered %.2f km \n",min,distance);
        min++;
        distance=distance+0.5;
        if(min==21)
        {
            printf("Marathon completed \n");
            break;
        }

    }
    return 0 ;
}
