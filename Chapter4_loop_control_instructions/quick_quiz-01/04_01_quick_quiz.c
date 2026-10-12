// 1.WAP to print natural numbers from 10 to 20.
// #include <stdio.h>

// int main()
// {
//     int i = 10;
//     // printf("Enter the number is: ");
//     // scanf("%d", &i);
//     while (i >= 10 && i <= 20)
//     {
//         printf("The value of i is %d\n", i);
//         i++;
//     }

//     return 0;
// }

// 2.WAP to print natural numbers from 10 to 20. When initial loop counter i is initialized to 0.
#include <stdio.h>

int main()
{
    int i = 0;

    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;
    }

    return 0;
}

// FEATURES                        QUESTION.1                                 QUESTION.2
// Initial value of i                 10                                          0
// Loop starts cheaking from          10                                          0
// Condition to print                 No addtional condition needed               if(i>=10)
// Need printed                       10 to 20                                    10 to 20
// Efficiency                         More efficient                              Perform additional iterations

/* Why Q.1 is more efficient than Q.2 ?
Q.1
>>> Loop starts directly from at 10.
TOTAL: 12 condition checks and 11 print operations.

Q.2
>>> Loop starts at 0 and checks every number until 20.
TOTAL: 22 checks of the While condition,21 checks of the If condition,and 11 print operations. */

//  OPERATION                   Q.1                            Q.2
//  Initial value               10                             0
//  Loop iterations             11                             21
//  While condition checks      12                             22
//  If condition checks         0                              21
//  Print operations            11                             11