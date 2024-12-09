#include <stdio.h>

int main() {
    int x;
    int reminder = 0;
    int sum = 0;
    printf("Input a positive number less than 500: ");
    scanf("%d", &x);

    if(x < 500) {
        while (x != 0) {
            reminder = x % 10;
            sum = sum + reminder;
            x = x / 10;
        }
        printf("Sum: %d\n", sum);
    }

}
