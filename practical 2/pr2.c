#include <stdio.h>

int main()
{

    float length, breadth;
    float area, perimeter;

    printf("Enter the length of the park in meters: ");
    scanf("%f", &length);

    printf("Enter the breadth of the park in meters: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nPark Dimensions: Length = %.2f meters, Breadth = %.2f meters\n", length, breadth);
    printf("Area of the park = %.2f square meters\n", area);
    printf("Perimeter of the park = %.2f meters\n", perimeter);

    return 0;
}
