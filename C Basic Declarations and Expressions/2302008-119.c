
#include <stdio.h>

int main() {
int num1, num2, temp;
int sum = 0;

printf("Input two numbers(integer):\n");
scanf("%d %d", &num1, &num2);

if (num1 > num2) {
    temp = num1;
    num1 = num2;
    num2 = temp;
}

for (int i = num1; i <= num2; i++) {
    if (i % 7 != 0) {
        sum = sum + i;
    }
}

printf("Sum of all numbers between said numbers (inclusive) not divisible by 7:\n%d\n", sum);

return 0;
}
