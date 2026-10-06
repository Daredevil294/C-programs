#include <stdio.h>

int main()
{
    int A;
    printf("Enter A = ");
    scanf("%d", &A);
    (A > 5) ? printf("A greater than 5") : printf("A is less than 5");
    return 0;
}