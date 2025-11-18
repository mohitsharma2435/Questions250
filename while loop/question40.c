#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter the number");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum is %d", sum);
    return 0;
}