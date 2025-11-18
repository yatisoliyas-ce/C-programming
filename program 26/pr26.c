#include <stdio.h>
#include <math.h>


void inputSides(float *a, float *b, float *c)
{
    printf("Enter the length of side a: ");
    scanf("%f", a);
    printf("Enter the length of side b: ");
    scanf("%f", b);
    printf("Enter the length of side c: ");
    scanf("%f", c);
}


int validateTriangle(float a, float b, float c)
{
    if (a + b > c && b + c > a && a + c > b)
        {
        return 1;
    }
    return 0;
}


float calculateSemiPerimeter(float a, float b, float c)
{
    return (a + b + c) / 2.0;
}


float calculateArea(float a, float b, float c, float s)
{
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


void displayResults(int isValid, float area)
{
    if (isValid)
        {
        printf("\nValid Triangle: Yes\n");
        printf("Area: %.2f\n", area);
    }
    else
    {
        printf("\nValid Triangle: No\n");
        printf("Message: \"The given lengths do not form a valid triangle.\"\n");
    }
}

int main()
{
    float a, b, c;
    float s, area;
    int isValid;

    printf("Triangle Garden Calculator\n\n");


    inputSides(&a, &b, &c);


    isValid = validateTriangle(a, b, c);

    if (isValid)
        {

        s = calculateSemiPerimeter(a, b, c);


        area = calculateArea(a, b, c, s);
    }
    else
        {
        area = 0;
    }


    displayResults(isValid, area);

    return 0;
}
