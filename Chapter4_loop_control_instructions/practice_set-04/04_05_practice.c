#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            printf("%d is even.\n", n);
            break;
        }
        else
        {
            printf("%d is odd.\n", n);
        break;
        }
        // if (prime == 1)
        // {
        //     printf("This is a prime number.\n");
        // }
        // else
        // {
        //     printf("This is a prime number.\n");
        // }
    }
    return 0;
}