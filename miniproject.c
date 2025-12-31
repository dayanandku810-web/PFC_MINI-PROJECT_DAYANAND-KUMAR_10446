#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;
    float fixedCharge = 50.0;
    float duty, total;

    // Input units
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Slab-based calculation (step-by-step)
    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 200) {
        bill = (100 * 1.50) +
               ((units - 100) * 2.50);
    }
    else if (units <= 300) {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               ((units - 200) * 4.00);
    }
    else {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               (100 * 4.00) +
               ((units - 300) * 6.00);
    }

    // Electricity duty (5%)
    duty = bill * 0.05;

    // Final bill
    total = bill + duty + fixedCharge;

    // Output
    printf("\n------ Electricity Bill ------\n");
    printf("Units Consumed   : %d\n", units);
    printf("Energy Charges   : Rs. %.2f\n", bill);
    printf("Fixed Charges    : Rs. %.2f\n", fixedCharge);
    printf("Electricity Duty : Rs. %.2f\n", duty);
    printf("------------------------------\n");
    printf("Total Bill       : Rs. %.2f\n", total);

    return 0;
}
