#include <stdio.h>
int main()
{
    int week;
    printf("Enter the week number");
    scanf("%d", &week);
    if (week < 0 || week > 7)
    {
        printf("invalid");
    }
    else if (week == 1)
    {
        printf("Monday");
    }
    else if (week == 2)
    {
        printf("Tuesday");
    }
    else if (week == 3)
    {
        printf("Wednesday");
    }
    else if (week == 4)
    {
        printf("Thrusday");
    }
    else if (week == 5)
    {
        printf("Friday");
    }
    else if (week == 6)
    {
        printf("Saturday");
    }
    else
    {
        printf("Sunday");
    }
    return 0;
}