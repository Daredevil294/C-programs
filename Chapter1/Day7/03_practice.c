#include<stdio.h>

int main()
{
    float radius, height;
    float pi;
    printf("the value of pi  is = 3.14\n");
    printf("what is the radius =\n");
    scanf("%f", &radius);
    printf("what is the height =\n");
    scanf("%f", &height);
    printf("volume of cylinder = %f", 3.14 * radius * radius * height);

    return 0;
}