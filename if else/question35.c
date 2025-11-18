#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of the triangle");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("Equilateral");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Isoceles");
    }
    else
        printf("Scaler");
    return 0;
}