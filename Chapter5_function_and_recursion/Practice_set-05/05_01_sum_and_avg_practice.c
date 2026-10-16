#include <stdio.h>
int sum(int a, int b, int c)
{
    return a + b + c;
}
float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a, b, c;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the number: ");
    scanf("%d", &b);
    printf("Enter the number: ");
    scanf("%d", &c);
    printf("Sum = %d\n", sum(a, b, c));
    printf("Average = %f\n", average(a, b, c));

    return 0;
}