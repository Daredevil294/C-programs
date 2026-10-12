#include<stdio.h>

int main()
{
    int Principal, Rate, Time, SI, Total_Amount;
    printf(" The principal amount is = \n ");
    scanf("%d", &Principal);
    printf(" The rate of interest ( in %% ) = \n");
    scanf("%d", &Rate);
    printf(" The time is(in years) = \n");
    scanf("%d", &Time);
    SI = Principal * Rate * Time / 100;
    Total_Amount = Principal + SI;
    printf("SI = %d\n", SI);
    printf("Total_Amount = %d\n", Total_Amount);
    return 0;
}
