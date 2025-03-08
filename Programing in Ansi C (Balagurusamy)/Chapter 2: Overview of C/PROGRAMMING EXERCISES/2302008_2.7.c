#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int num1;
    int num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, add(num1, num2));
    printf("%d - %d = %d\n", num1, num2, sub(num1, num2));

    return 0;
}
