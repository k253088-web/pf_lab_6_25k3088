#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 1) {
        printf("This number is Odd.\n");
    } else {
        printf("This number is Even.\n");
    }

    return 0;
}
