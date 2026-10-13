// -------->>>>>>>>> calculate area of circumference using library function.
#include <stdio.h>
#include <math.h>
int main()
{
    int r;
    float pi = 3.14;

    printf("Enter the value of radius: ");
    scanf("%d", &r);
    printf("The area of circle = %f\n", 2 * pi * pow(r, 1)); // pow (base,exponent)

    return 0;
}