#include <stdio.h>

int main()
{
    int physics, chemistry, biology;
    float total;

    printf("Enter the marks of physics is = ");
    scanf("%d", &physics);

    printf("Enter the marks of chemistry is = ");
    scanf("%d", &chemistry);

    printf("Enter the marks of biology is = ");
    scanf("%d", &biology);

    total = (physics + chemistry + biology) / 3;

    if ((total <= 40) || physics < 33 || chemistry < 33 || biology < 33)
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }

    return 0;
}