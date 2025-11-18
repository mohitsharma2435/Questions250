#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter cost price and selling price:");
    scanf("%d%d", &cp, &sp);
    if (sp > cp)
    {
        printf("The profit is %d", sp - cp);
    }
    else if (cp > sp)
    {
        printf("The loss is %d", cp - sp);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}