#include <stdio.h>
int main()
{
    int year, m, day;
    printf("Enter the month number");
    scanf("%d", &m);
    printf("enter year");
    scanf("%d", &year);
    if (m < 1 || m > 12)
    {
        printf("Invalid");
    }
    else if (m == 2)
    {
        if ((year % 4) == 0 || (year % 100) != 0 || (year % 400) == 0)
        {
            day = 29;
        }
        else
        {
            day = 28;
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        day = 30;
    }
    else
    {
        day = 31;
    }
    printf("The number of days in %d is %d", m, day);
    return 0;
}