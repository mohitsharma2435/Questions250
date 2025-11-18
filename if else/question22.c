#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two nuumbers");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("the number %d is greater than %d", a, b);
    }
    else if (a < b)
    {
        printf("The number %d is greater than %d", b, a);
    }
    else
    {
        printf("The two numbers are equal");
    }
    return 0;
}