#include <stdio.h>
int sum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The sum of first %d natural number is %d\n ", n, sum(n));
    return 0;
}