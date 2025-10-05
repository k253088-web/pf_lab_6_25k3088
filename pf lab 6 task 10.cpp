#include <stdio.h>
#include <math.h>

int main() {
    float principal_amt = 0.0;
    float annual_rate = 0.0;
    int compound_times = 0;
    int years = 0;
    float final_value = 0.0;

    printf("Enter principal amount (p): ");
    scanf("%f", &principal_amt);

    printf("Enter annual interest rate (r in decimal, e.g. 0.1 for 10%): ");
    scanf("%f", &annual_rate);

    printf("Enter number of times interest applied per year (n): ");
    scanf("%d", &compound_times);

    printf("Enter number of years (t): ");
    scanf("%d", &years);

    final_value = principal_amt * pow(1 + annual_rate / compound_times, compound_times * years);

    printf("Future value of investment (A) = %.2f\n", final_value);

    return 0;
}
