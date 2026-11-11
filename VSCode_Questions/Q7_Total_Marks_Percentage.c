#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    printf("Total Marks = %.2f out of 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}