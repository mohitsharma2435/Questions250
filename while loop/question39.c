#include <stdio.h>
int main()
{
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0)
    {
        int r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}