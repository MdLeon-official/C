#include <stdio.h>

#define PI 3.1416

int main() {
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Perimeter of the Circle: %f\n", 2 * PI * radius);
    printf("Area of the Circle: %f\n", PI * radius * radius);
}
