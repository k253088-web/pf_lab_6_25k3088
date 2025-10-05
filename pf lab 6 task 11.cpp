#include <stdio.h>
#include <math.h>

int main() {
    float height = 0.0;
    float angle = 0.0;
    float shadow_length = 0.0;

    printf("Enter height of building (H): ");
    scanf("%f", &height);

    printf("Enter angle of elevation in radians : ");
    scanf("%f", &angle);

    if (tan(angle) == 0) {
        printf("Measuring length is not possible as tan(theta) = 0 tends to infinity.\n");
        return 0;
    }

    shadow_length = height / tan(angle);

    if (shadow_length > 0) {
        printf("Length of shadow (L) = %.2f units\n", shadow_length);
    } else {
        printf("Enter valid values as length cannot be negative or equal to 0.");
    }

    return 0;
}
