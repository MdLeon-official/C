#include <stdio.h>
int main() {
    float num;
    printf("Enter a floating point number: ");
    scanf("%f", &num);
    int integral = (int)num;

    int rightmost = integral % 100;
    printf("%d\n", rightmost);
    return 0;
}
