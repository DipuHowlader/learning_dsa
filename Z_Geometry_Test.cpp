#include <stdio.h>

int main() {
    float units_used, bill = 0;
    
    printf("Enter number of units used this month: ");
    scanf("%f", &units_used);
    
    if (units_used <= 50) {
        bill = units_used * 4;
    } else if (units_used <= 80) {
        bill = 50 * 4 + (units_used - 50) * 3;
    } else if (units_used <= 100) {
        bill = 50 * 4 + 30 * 3 + (units_used - 80) * 2;
    } else {
        bill = 50 * 4 + 30 * 3 + 20 * 2 + (units_used - 100) * 1;
    }

    printf("BDT %.2f Only\n", bill);

    return 0;
}
