#include <stdio.h>

int main() {
    float a, b, c, x;

    printf("Input the first number: ");
    scanf("%f", &a);
    printf("Input the second number: ");
    scanf("%f", &b);
    printf("Input the third number: ");
    scanf("%f", &c);

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        x = a + b + c;
        printf("Perimeter = %.1f\n", x);
    }
    else {
        printf("The given values cannot form a triangle!\n");
    }

    return 0;
}
