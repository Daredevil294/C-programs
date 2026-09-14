#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    while (i < 11)
    // a = 11;
    // while (a > 10) -----> These two lines will lead to an infinite loop
    {

        printf("%d\n", i);
        i++;
    }

    return 0;
}