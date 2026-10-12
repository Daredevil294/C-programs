//------------>>>>>>>>>>>>>>>>>> FOR LOOP
// #include <stdio.h>

// int main()
// {
//     int n;
//  // int fact = 1;
//     long long fact = 1;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

// //  printf("Factorial of %d is %d\n", n, fact);
//     printf("Factorial of %d is %lld\n", n, fact);
//     return 0;
// }

// ------------->>>>>>>>>>>>>>>>>> WHILE LOOP
// #include <stdio.h>

// int main()
// {
//     int n;
//     int i = 1;
// //  int fact = 1;
//     long long fact = 1;
//     printf("Enter the number = ");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         fact = fact * i;
//         i++;
//     }
//  // printf("Factorial of %d is %d\n", n, fact);
//     printf("Factorial of %d is %lld\n", n, fact);
//     return 0;
// }

// ------------->>>>>>>>>>>>>>>>>> DO WHILE LOOP
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    // //  int fact = 1;
    long long fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    do
    {
        fact = fact * i;
        i++;
    } while (i <= n);
    // //  printf("Factorial of %d is %d\n", n, fact);
    printf("Factorial of %d is %lld\n", n, fact);
    return 0;
}