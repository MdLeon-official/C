#include <stdio.h>

int main() {
    int num, digit, count = 0;

    printf("Input a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;
        if(digit == 3)
            count++;
        num = num / 10;
    }

    printf("The number of threes in the said number is %d\n", count);

    return 0;
}
