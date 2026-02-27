/*  
    Problem: Customer Bill Calculation
    Algorithm: Reads quantities, calculates subtotal, tax, and total
    Developed by: Taisen Marainump
    Date: 27/02/2026
*/

#include <stdio.h>

int main() {
    // Define constants
    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASHDRIVE_PRICE = 35.20;
    const float HARDDRIVE_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;   // 8.35%

    // Declare variables
    int qtyTV, qtyMonitor, qtyFlashDrive, qtyHardDrive, qtyPrinter;
    float totalTV, totalMonitor, totalFlashDrive, totalHardDrive, totalPrinter;
    float subtotal, tax, total;

    // Input
    printf("How many TVs were sold? ");
    scanf("%d", &qtyTV);

    printf("How many Monitors were sold? ");
    scanf("%d", &qtyMonitor);

    printf("How many Flash Drives were sold? ");
    scanf("%d", &qtyFlashDrive);

    printf("How many Hard Drives were sold? ");
    scanf("%d", &qtyHardDrive);

    printf("How many Deskjet Printers were sold? ");
    scanf("%d", &qtyPrinter);

    // Calculations
    totalTV = qtyTV * TV_PRICE;
    totalMonitor = qtyMonitor * MONITOR_PRICE;
    totalFlashDrive = qtyFlashDrive * FLASHDRIVE_PRICE;
    totalHardDrive = qtyHardDrive * HARDDRIVE_PRICE;
    totalPrinter = qtyPrinter * PRINTER_PRICE;

    subtotal = totalTV + totalMonitor + totalFlashDrive + totalHardDrive + totalPrinter;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // Output
    printf("\nQTY  DESCRIPTION      UNIT PRICE   TOTAL PRICE\n");
    printf("---------------------------------------------------\n");
    printf("%-4d TV              %8.2f   %10.2f\n", qtyTV, TV_PRICE, totalTV);
    printf("%-4d Monitor         %8.2f   %10.2f\n", qtyMonitor, MONITOR_PRICE, totalMonitor);
    printf("%-4d Flash Drive     %8.2f   %10.2f\n", qtyFlashDrive, FLASHDRIVE_PRICE, totalFlashDrive);
    printf("%-4d Hard Drive      %8.2f   %10.2f\n", qtyHardDrive, HARDDRIVE_PRICE, totalHardDrive);
    printf("%-4d Deskjet Printer %8.2f   %10.2f\n", qtyPrinter, PRINTER_PRICE, totalPrinter);

    printf("---------------------------------------------------\n");
    printf("Subtotal: %30.2f\n", subtotal);
    printf("Tax:      %30.2f\n", tax);
    printf("Total:    %30.2f\n", total);
    printf("---------------------------------------------------\n");

    return 0;
}
