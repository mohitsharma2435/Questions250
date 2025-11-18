#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d;
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        printf("Real and Distinct:%.2f , %.2f \n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    }
    else if (d == 0)
    {
        printf("Real and Equal:%.2f \n", (-b) / (2 * a));
    }
    else
    {
        printf("Imaginary\n");
    }
    return 0;
}