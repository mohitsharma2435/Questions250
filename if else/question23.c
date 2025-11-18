#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("The number %d is greatest", a);
        }
        else
        {
            printf("the number %d is greatest", c);
        }
    }
    else if (b > c)
    {
        printf("The number %d is the greatest", b);
    }
    else
    {
        printf("The number %d is the greatest", c);
    }
    return 0;
}