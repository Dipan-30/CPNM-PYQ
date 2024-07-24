#include <stdio.h>

int main() {
    int units;
    float total_charge = 0;

    // Read the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the charge based on the given rates
    if (units <= 200) {
        total_charge = units * 1.0;
    } else if (units <= 300) {
        total_charge = 200 * 1.0 + (units - 200) * 1.5;
    } else {
        total_charge = 200 * 1.0 + 100 * 1.5 + (units - 300) * 2.0;
    }

    // Print the total charge amount
    printf("Total charge: Rs %.2f\n", total_charge);

    return 0;
}
