#include <stdio.h>

int main() {
    int num;
    printf("Input an integer: ");
    scanf("%d", &num);

    printf("All the divisors of %d are:\n", num);

    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
