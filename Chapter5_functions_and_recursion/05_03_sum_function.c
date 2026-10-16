#include <stdio.h>
// Sum is a function which takes a and b as input and returns an integer as an output.
int sum(int a, int b); // function prototype declaration
int main()
{
    int c;
    c = sum(3, 5); // function call
    printf("Sum = %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}