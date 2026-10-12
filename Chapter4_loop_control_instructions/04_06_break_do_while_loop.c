#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    do
    {
        printf("The value of i is %d\n", i);
        if (i == n)
        {
            break;
        }
        i++;
    } while (i <= 10);

    return 0;
}