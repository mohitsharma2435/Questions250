#include <stdio.h>
int main()
{
    int d, m, year;
    printf("enter the date in dd/mm/yyyy");
    scanf("%d %d %d", &d, &m, &year);
    int max;
    if (m < 1 || m > 12)
    {
        printf("Invalid date");
        return 0;
    }
    else if (m == 2)
    {
        if ((year % 4) == 0 || (year % 100) != 0 || (year % 400) == 0)
        {
            max = 29;
        }
        else
        {
            max = 28;
        }
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            max = 30;
        }
        else
        {
            max = 31;
        }
    }
    if (d >= 1 && d <= max)
        printf("Valid");
    else
        printf("Invalid date");
    return 0;
}