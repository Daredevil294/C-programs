// --------->>>>>>>>>> Sum first 10 natural numbers using while loop.
// #include <stdio.h>

// int main()
// {
//     int sum = 0;
//     int i = 1;
//     while (i <= 10)
//     {
//         sum = sum + i;
//         i++;
//     }
//     printf("Sum = %d\n", sum);

//     return 0;
// }

//--------->>>>>>>>>> Sum first 10 natural numbers using for loop.
// #include <stdio.h>

// int main()
// {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         sum = sum + i;
//     }
//     printf("Sum = %d\n", sum);

//     return 0;
// }

// --------->>>>>>>>>> Sum first 10 natural numbers using do while loop.
#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("Sum = %d\n", sum);
    return 0;
}