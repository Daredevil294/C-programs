#include <stdio.h>
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter the non-negative number.");
    }
    else
    {
        printf("Fibonacci = %d\n", fib(n));
    }
    return 0;
}