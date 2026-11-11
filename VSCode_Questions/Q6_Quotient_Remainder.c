#include <stdio.h>

int main()
{
    int a, b, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &a);

    printf("Enter divisor: ");
    scanf("%d", &b);

    quotient = a / b;
    remainder = a % b;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}