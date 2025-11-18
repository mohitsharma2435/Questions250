#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("the number is zero");
    }
    else if (a < 0)
    {
        printf("Th enumber is negative");
    }
    else
    {
        printf("The number is positive");
    }
    return 0;
}