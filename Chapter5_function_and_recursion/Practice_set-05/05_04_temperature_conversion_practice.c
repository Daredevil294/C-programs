#include <stdio.h>
float fahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{

    float celsius;
    printf("Enter the value of Celsius = ");
    scanf("%f",&celsius);
    printf("Fahrenheit = %.3f\n",fahrenheit(celsius));
    return 0;
}