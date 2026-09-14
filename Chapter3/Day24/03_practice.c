#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year = ");
    scanf("%d", &year);
    // if (year%400==0)// yeh century ko baata hai baata hai ki leap year hai ke nahi
    // if (year % 4 == 0)// year ko baata hai ki leap year hai ki nahi

    // Agar koi year 4 se divisible/reamainder 0 hai aur 100 se divisible/remainder 0 nahi aata hai,toh woh year leap year hai

    // Agar koi year 4 se divisible hai/remainder 0 aata hai aur 100 se bhi divisible hai/remainder 0 but 400 se divisible/remainder 0 nahi aata hai,toh woh year leap year main nahi aata hai

    // Agar koi year 4 se aur 100 se aur 400 se total divisible hai/remainder 0 aata hai,toh woh year leap year hai

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is the leap year.", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}