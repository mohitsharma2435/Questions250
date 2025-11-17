#include <stdio.h>
int main()
{
    char A;
    printf("Enter a character: ");
    scanf("%c", &A);
    if (A >= 'A' && A <= 'z')
    {
        printf(" the character is uppercase");
    }
    else if (A >= 'a' && A <= 'z')
    {
        printf(" the character is lowercase");
    }
    else if (A >= '0' && A <= '9')
    {
        printf(" the character is digit");
    }
    else
    {
        printf(" the character is special character");
    }
    return 0;
}