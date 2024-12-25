
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Input two integer values:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num2 == 0) {
        printf("Division not possible..!\n");
    }
    else {
        float result = (float)num1 / num2;
        printf("Result: %.2f\n", result);
    }
    return 0;
}
