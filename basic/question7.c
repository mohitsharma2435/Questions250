#include <stdio.h>
int main() {
    float s1, s2, s3, s4, s5, total, percent;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, s2, s3, s4, s5);

    total = s1 + s2 + s3 + s4 + s5;
    percent = (total / 500) * 100;

    printf("Percentage = %.2f%%\n", percent);
    return 0;
}
