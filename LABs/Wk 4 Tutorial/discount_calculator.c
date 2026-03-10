#include <stdio.h>

int main() {
    float price, gross_price, discount = 0.0, net_price;
    int quantity;

    // Get user input
    printf("Enter the price of the item (PGK): ");
    if (scanf("%f", &price) != 1) {
        printf("Invalid input for price.\n");
        return 1;
    }

    printf("Enter the quantity: ");
    if (scanf("%d", &quantity) != 1) {
        printf("Invalid input for quantity.\n");
        return 1;
    }

    // Calculate gross price
    gross_price = price * quantity;

    // Apply logic: 10% discount if over PGK 100
    if (gross_price > 100.0) {
        discount = gross_price * 0.10;
    }

    net_price = gross_price - discount;

    // Display results
    printf("\n------------------------------\n");
    printf("Gross Price: PGK %.2f\n", gross_price);
    printf("Discount:    PGK %.2f\n", discount);
    printf("Net Price:   PGK %.2f\n", net_price);
    printf("------------------------------\n");

    return 0;
}