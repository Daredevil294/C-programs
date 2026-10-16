#include <stdio.h>
float force(float mass)
{
    return mass * 9.8;
}
int main()
{
    float m;
    printf("Enter the mass in the kgs: ");
    scanf("%f", &m);
    if (m < 0)
    {
        printf("Mass can not be negative.\n");
    }
    else
    {
        printf("The value of force in Newton = %.3f\n", force(m));
    }

    return 0;
}