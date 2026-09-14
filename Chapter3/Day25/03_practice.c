// CHARACTER ENTER BY THE USERS LOWERCAEE OR NOT

#include <stdio.h>

int main()
{
    char character_lowercase;
    printf("Enter the character_lowercase from the keyboards = ");
    scanf("%c", &character_lowercase);
    if (character_lowercase <= 122 && character_lowercase >= 97)
    {
        printf("%c is the character_lowercase\n", character_lowercase);
    }
    else
    {
        printf("%c is not character_lowercase\n", character_lowercase);
    }

    return 0;
}