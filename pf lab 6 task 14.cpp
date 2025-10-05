#include <stdio.h>
int main() {
    int value = 0;
    printf("Enter any integer: ");
    scanf("%d", &value);
    printf("Twice the number: %d\n", value << 1);
    printf("Four times the number: %d\n", value << 2);
    printf("Eight times the number: %d\n", value << 3);
    return 0;
}
