#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (i < 10)
    {
        i++;
        if (i == n)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}