#include <stdio.h>

int main()
{
    float basic, allowance, bonus, totalSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter allowance: ");
    scanf("%f", &allowance);

    printf("Enter bonus: ");
    scanf("%f", &bonus);

    totalSalary = basic + allowance + bonus;

    printf("Total Salary = %.2f\n", totalSalary);

    return 0;
}