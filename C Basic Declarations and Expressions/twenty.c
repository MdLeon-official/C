#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, determinant, root1, root2;

    printf("Input the first number(a): ");
    scanf("%f", &a);
    printf("Input the second number(b): ");
    scanf("%f", &b);
    printf("Input the third number(c): ");
    scanf("%f", &c);

    determinant = (b * b) - (4 * a * c);

    if (determinant > 0 && a != 0) {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Root1 = %.5f\n", root1);
        printf("Root2 = %.5f\n", root2);
    }
    else {
        printf("It is not possible to find the roots.\n");
    }

    return 0;
}
