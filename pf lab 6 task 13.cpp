#include <stdio.h>

int main() {
    int number = 0, ones = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        if (number & 1)
            ones++;
        number >>= 1;  // shift bits to the right
    }

    printf("Number of 1 bits in binary: %d\n", ones);

    return 0;
}
