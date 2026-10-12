/*
Prefix Increment
++i >>>>> INCREMNET FIRST,then returns the NEW VALUE.

Postfix Increment
i++ >>>>> Returns the current value first,then increments the variable.

Prefix Decrement
--i >>>>> DECREMENTS FIRST,then returns the NEW VALUE.

Postfix Decrement
i-- >>>>> Returns the current value first,then decrements the variable.
*/

#include <stdio.h>

int main()
{
    int i = 100;

    printf("The value of ++i is %d\n", ++i);
    printf("The value of i is %d\n", i);

    printf("The value of i++ is %d\n", i++);
    printf("The value of i is %d\n", i);

    printf("The value of --i is %d\n", --i);
    printf("The value of i is %d\n", i);

    printf("The value of i-- is %d\n", i--);
    printf("The value of i is %d\n", i);

    return 0;
}