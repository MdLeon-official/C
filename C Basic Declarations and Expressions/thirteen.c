#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max;

    printf("Input the first integer: ");
    scanf("%d", &num1);

    printf("Input the second integer: ");
    scanf("%d", &num2);

    printf("Input the third integer: ");
    scanf("%d", &num3);

    if(num1 >= num2 && num1 >= num3) {
        max = num1;
    }
    if(num2 > num1 && num2 >= num3) {
        max = num2;
    }
    if(num3 > num1 && num3 > num2) {
        max = num3;
    }

    printf("Maximum value of three integers: %d\n", max);

    return 0;
}
