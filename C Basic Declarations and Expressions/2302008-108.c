
#include <stdio.h>

int main() {
    int first, second, odd_sum = 0, even_sum = 0;

    printf("Input the first integer number:\n");
    scanf("%d", &first);

    printf("Input the second integer number (greater than first integer):\n");
    scanf("%d", &second);

    for(int i = first; i <= second; i++) {
        if(i % 2 == 0) {
            even_sum = even_sum + i;
        }
        else {
            odd_sum = odd_sum + i;
        }
    }

    printf("Sum of all odd values between %d and %d:\n%d\n", first, second, odd_sum);
    printf("Sum of all even values between %d and %d:\n%d\n", first, second, even_sum);

    return 0;
}
