#include <stdio.h>

int main() {
    int x = 0, y = 0;
    printf("Enter two integers:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    // Swapping without third variable using XOR
    x ^= y;
    y ^= x;
    x ^= y;

    printf("After swapping values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
