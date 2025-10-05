#include <stdio.h>

int main() {
    int amount;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    printf("Enter amount in cents: ");
    scanf("%d", &amount);

    
    while (amount >= 25) {
        amount = amount - 25;
        quarters++;
    }


    while (amount >= 10) {
        amount = amount - 10;
        dimes++;
    }

    
    while (amount >= 5) {
        amount = amount - 5;
        nickels++;
    }

    
    while (amount >= 1) {
        amount = amount - 1;
        pennies++;
    }

    printf("\nCoins needed:\n");
    printf("Quarters (25): %d\n", quarters);
    printf("Dimes (10): %d\n", dimes);
    printf("Nickels (5): %d\n", nickels);
    printf("Pennies (1): %d\n", pennies);

    return 0;
}
