#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of the triangle");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b) > c || (b + c) > a || (c + a) > b)
    {
        printf("Valid");
    }
    else
        printf("Invalid");
    return 0;
}