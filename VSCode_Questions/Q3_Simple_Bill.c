#include <stdio.h>

int main()
{
    float price, total;
    int quantity;

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nTotal Bill = %.2f\n", total);

    return 0;
}