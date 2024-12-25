
#include <stdio.h>

int main() {
    int number, i;

    printf("Input a number (integer value):\n");
    scanf("%d", &number);

    printf("\nAll positive divisors of %d\n", number);

    for(i = 1; i <= number; i++) {
        if(number % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
