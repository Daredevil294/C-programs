#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    return 0;
}
void goodMorning()
{
    printf("Good Morning, Dev.\n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("Good Afternoon,Dev.\n");
    goodNight();
}
void goodNight()
{
    printf("Good Night, Dev.\n");
}
