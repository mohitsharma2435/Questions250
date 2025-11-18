#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("the number %d is maximum", a);
    }
    else
    {
        printf("th enumber %d is max", b);
    }
    return 0;
}