#include <stdio.h>
long long int factorial(long long int n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    long long int num;
    printf("Enter the number is ");
    scanf("%lld", &num);
    if (num < 0)
    {
        printf("Factorial of negative number is not definded.\n");
    }
    else if (num > 20)
    {
        printf("Number is too large for long long int factorial.\n");
    }
    else
    {
        printf("Factorial of %lld is %lld\n", num, factorial(num));
    }
    return 0;
}