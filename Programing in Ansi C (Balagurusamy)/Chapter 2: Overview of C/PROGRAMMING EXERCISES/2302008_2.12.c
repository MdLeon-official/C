#include <stdio.h>

int main() {
    float x, y;

    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("Enter value for y: ");
    scanf("%f", &y);

    printf("x = %.2f\ty = %.2f\n", x, y);
    printf("Sum = %.2f\tDifference = %.2f\n", x+y, x-y);
    printf("Product = %.2f\tDivision = %.2f\n", x*y, x/y);

    return 0;
}
