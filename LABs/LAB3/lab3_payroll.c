#include <stdio.h>

int main(void)
{
    FILE *inFile, *outFile;

    char empNo[10];
    int department;
    float payRate;
    char exempt;
    int hoursWorked;
    float basePay;

    /* Open input file */
    inFile = fopen("employee.txt", "r");
    if (inFile == NULL)
    {
        printf("Error opening employee.txt\n");
        return 1;
    }

    /* Open output file */
    outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL)
    {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    /* Discard header line */
    fscanf(inFile, "%*[^\n]\n");

    /* Write output header */
    fprintf(outFile,
            "%-12s %-12s %-10s %-8s %-15s %-10s\n",
            "Emp No", "Department", "Pay Rate",
            "Exempt", "Hours Worked", "Base Pay");

    /* Read and process records */
    while (fscanf(inFile, "%9s %d %f %c %d",
                  empNo, &department, &payRate,
                  &exempt, &hoursWorked) == 5)
    {
        basePay = payRate * hoursWorked;

        fprintf(outFile,
                "%-12s %-12d %-10.2f %-8c %-15d %-10.2f\n",
                empNo, department, payRate,
                exempt, hoursWorked, basePay);
    }

    /* Close files */
    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");
    return 0;
}