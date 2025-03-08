#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main() {
    int x = 4, y = 5;
    double radius = sqrt((x*x) + (y*y));
    double perimeter = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("Radius: %.2f\n", radius);
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);

    return 0;
}
