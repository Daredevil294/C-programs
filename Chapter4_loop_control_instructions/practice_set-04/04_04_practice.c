#include <stdio.h>

int main()
{
    int n;
    //  int fact = 1;
    long long fact = 1;
    printf("Enter the n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    //  printf("f\Factorial of %d is %d\n", n, fact);
    printf("Factorial of %d is %lld\n", n, fact);
    return 0;
}