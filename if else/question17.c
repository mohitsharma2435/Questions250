#include <stdio.h>
int main()
{
    char A;
    printf("Enter a character: ");
    scanf("%c", &A);
    if (A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u' || A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U')
    {
        printf("The character is a vowel. \n");
    }
    else
    {
        printf("Th echaracter is a consonant. \n");
    }
    return 0;
}