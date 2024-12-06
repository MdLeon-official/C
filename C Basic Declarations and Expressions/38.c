#include <stdio.h>

int main() {
    float x, y, result;

    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);

    if(y != 0) {
        result = x / y;
        printf("%.1f\n", result);
    }
    else {
        printf("Division is not possible\n");
    }

    return 0;
}
