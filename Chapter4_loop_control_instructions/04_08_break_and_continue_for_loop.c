//------->>>>>>> BREAK
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the value n : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == n)
//         {
//             break;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

// -------->>>>>>> CONTINUE
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value n : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        if (i == n)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
