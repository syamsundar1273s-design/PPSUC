#include <stdio.h>

int main() {
    double basic_salary, DA, HRA, gross_salary;

    // Read basic salary
    scanf("%lf", &basic_salary);

    // Calculate DA and HRA based on salary slabs
    if (basic_salary <= 10000) {
        DA = 0.8 * basic_salary;
        HRA = 0.2 * basic_salary;
    } else if (basic_salary <= 20000) {
        DA = 0.9 * basic_salary;
        HRA = 0.25 * basic_salary;
    } else {
        DA = 0.95 * basic_salary;
        HRA = 0.3 * basic_salary;
    }

    // Calculate gross salary
    gross_salary = basic_salary + DA + HRA;

    // Print gross salary with 2 decimal places
    printf("%.2lf", gross_salary);

    return 0;
}
