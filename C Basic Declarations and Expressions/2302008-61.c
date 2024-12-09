#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Input value of: ");
    scanf("%f", &x);
    printf("Value of sin(1/x): %.4f\n", sin(1.0/x));
}
