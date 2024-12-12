#include <stdio.h>

int main() {
    int number = 2;
    int line_count = 0;
    int is_prime;

    printf("The prime numbers between 1 and 199 are:\n");

    while (number <= 199) {
        is_prime = 1;

        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", number);
            line_count = line_count + 1;

            if (line_count == 10) {
                printf("\n");
                line_count = 0;
            }
        }

        number = number + 1;
    }

    return 0;
}
