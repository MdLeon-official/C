#include <stdio.h>

int main() {
    float cms, inches;

    printf("Input the distance in cm: ");
    scanf("%f", &cms);

    inches = cms / 2.54;

    printf("Distance of %.2f cms is = %.2f inches\n", cms, inches);

    return 0;
}
