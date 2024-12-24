
#include <stdio.h>
int main() {
    int num;

    printf("Input a number (integer):\n");
    scanf("%d", &num);

    if (num == 0) {
        printf("Zero\n");
    }
    else if (num > 0 && num % 2 == 0) {
        printf("Number is positive-even\n");
    }
    else if (num > 0 && num % 2 != 0) {
        printf("Number is positive-odd\n");
    }
    else if (num < 0 && num % 2 == 0) {
        printf("Number is negative-even\n");
    }
    else if (num < 0 && num % 2 != 0) {
        printf("Number is negative-odd\n");
    }

    return 0;
}
