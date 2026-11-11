#include <stdio.h>

int main()
{
    int productID, quantity;
    float price, discount, subtotal, discountAmount, finalPayable;

    printf("Enter Product ID: ");
    scanf("%d", &productID);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discount);

    subtotal = price * quantity;
    discountAmount = (subtotal * discount) / 100;
    finalPayable = subtotal - discountAmount;

    printf("\n----- INVOICE -----\n");
    printf("Product ID: %d\n", productID);
    printf("Price: %.2f\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Discount: %.2f\n", discountAmount);
    printf("Final Payable: %.2f\n", finalPayable);

    return 0;
}