#include <stdio.h>
#include <math.h>

int main() {
    int num_people = 0;
    float price_per_head = 250.50;
    float total_amount = 0.00;

    printf("Enter the number of people in the group: ");
    scanf("%d", &num_people);

    total_amount = num_people * price_per_head;
    total_amount = ceil(total_amount);

    printf("Total amount to be paid: Rs %.0f\n", total_amount);

    return 0;
}

