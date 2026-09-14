#include<stdio.h>
#include<math.h>

int main()
{
    int a = 5;
    int b = 10;
    int z;     // legal
    z = b * a; // illegal
    printf("the value of z is %d\n", z);
    printf("the value of a+b is %d\n", a + b);
    printf("the value of a-b is %d\n", a - b);
    printf("the value of a*b is %d\n", a * b);
    printf("the value a/b is %d\n", a / b);
    printf("the value of 2*9 is %d\n", 2 * 9);
    printf("the value of 5 to the power 4 is %f\n", pow(5, 4));
    printf("the value is 2/5 is %d\n", 2 / 5);
    return 0;
}