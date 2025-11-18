#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, next;
    printf("Enter a number :");
    scanf("%d", &n);
    while (n--)
    {
        printf("%d", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}