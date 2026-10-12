//Converserion of temperature in celsius to fahrenheit

#include<stdio.h>

int main()
{
    float Celsius,Fahrenheit;
    printf("Enter the value of Celsius = ");
    scanf("%f",&Celsius);
    Fahrenheit = (Celsius*9/5)+32;
    printf("Fahrenheit = %f\n",Fahrenheit = (Celsius*9/5)+32);

    // Conversion of temperature in fahrenheit to celsius
    printf("Enter the value of Fahrenheit = ");
    scanf("%f",&Fahrenheit);
    Celsius = (Fahrenheit-32)*(5.0/9);
    printf("Celsius = %f\n",Celsius = (Fahrenheit-32)*(5.0/9));
    return 0;
}