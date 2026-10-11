#include <stdio.h>

int main()
{
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    do
    {
        printf("%d\n", i++);
    } while (i <= 100);
    return 0;
}