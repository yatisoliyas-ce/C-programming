#include<stdio.h>
#include<math.h>
int main()
{
    float w,h,bmi;

   printf("enter your height in meters ");
   scanf("%f",&h);
   printf("enter your weight in kilograms ");
   scanf("%f", &w);
   if(w>0&&h>0)
   {
   bmi= w/pow(h,2);
   printf("your BMI = %.2f",bmi);
        if(bmi<18.5)
       {
         printf("you are underweight");
       }
        else if(bmi>18.5&&bmi<24.9)
        {
            printf("you have healthy weight");
        }
        else
        {
            printf("you are overweight");
        }
   }
   else{
    printf("your input is invalid");
    return 0;
   }

 return 0;
}

