#include<stdio.h>
#include<math.h>
int main()
{

    float celcius;
    printf("enter the temperature in degree celcius\n");
    scanf("%f",&celcius);
    float fahrenheit=(celcius*9/5)+32;
    printf("the value of temperature in fahrenheit = %f",fahrenheit);
    return 0 ;

}
