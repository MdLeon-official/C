
#include <stdio.h>

int main() {
    int num1, num2;
    int sum = 0;
    int start, end;

    printf("Input two numbers (integer values):\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 < num2) {
        start = num1;
        end = num2;
    } else {
        start = num2;
        end = num1;
    }

    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }

    printf("\nSum of all even values between %d and %d\n%d\n", num1, num2, sum);

    return 0;
}
