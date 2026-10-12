#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = n; // [i] ki initial value n ke equal hai.Ex.--->>> 5.
         i;         // Jab tak [i] zero nahi hota ,loop chalta rahega
         i--)
    {
        printf("The reverse natural number = %d\n", i);
    }

    return 0;
}
