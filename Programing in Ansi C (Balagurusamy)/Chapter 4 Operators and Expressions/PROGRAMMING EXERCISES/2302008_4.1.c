#include <stdio.h>
int main() {
    float num;
    printf("Enter a floating point number: ");
    scanf("%f", &num);
    int integral = (int)num;
    printf("%d\n", integral);

    int rightmost = integral % 10;
    printf("%d\n", rightmost);
    return 0;
}
