#include <stdio.h>

int main() {
    int a;
    int reverse = 0;
    int remainder;

    printf("The original number: ");
    scanf("%d", &a);

    printf("The original number = %d\n", a);

    while(a != 0) {
        remainder = a % 10;
        reverse = reverse * 10 + remainder;
        a = a / 10;
    }

    printf("The reverse of the said number = %d\n", reverse);

    return 0;
}
