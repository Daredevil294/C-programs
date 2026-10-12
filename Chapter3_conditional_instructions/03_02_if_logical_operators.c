#include <stdio.h>

int main()
{
    int age = 75;
    // int vipPass = 0;
    // int vipPass = 1;
    printf("Enter the age = ");
    scanf("%d", &age);
    if (age <= 75 && age >= 18)
    // if ((age <= 75 && age >= 18) || !(vipPass == 0))
    {
        printf("you are above the 18 years and below the 75 years,you can drive the car");
    }
    else
    {
        printf("you can not drive the car");
    }
    return 0;
}