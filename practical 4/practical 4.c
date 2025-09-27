#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Data Type Sizes and Ranges \n\n");

    printf("char:\n");
    printf("  Size      : %zu bytes\n", sizeof(char));


    printf("unsigned char:\n");
    printf("  Size      : %zu bytes\n", sizeof(unsigned char));


    printf("int:\n");
    printf("  Size      : %zu bytes\n", sizeof(int));


    printf("unsigned int:\n");
    printf("  Size      : %zu bytes\n", sizeof(unsigned int));


    printf("short:\n");
    printf("  Size      : %zu bytes\n", sizeof(short));


    printf("long:\n");
    printf("  Size      : %zu bytes\n", sizeof(long));


    printf("long long:\n");
    printf("  Size      : %zu bytes\n", sizeof(long long));



    printf("float:\n");
    printf("  Size      : %zu bytes\n", sizeof(float));


    printf("double:\n");
    printf("  Size      : %zu bytes\n", sizeof(double));


    printf("long double:\n");
    printf("  Size      : %zu bytes\n", sizeof(long double));

    return 0;
}
