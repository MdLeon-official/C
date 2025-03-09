#include <stdio.h>

int main() {
    int n;
    int pos = 0;
    int neg = 0;

    while (1){
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n > 0) {
            pos++;
        } else {
            neg++;
        }
    }

    printf("Number of positive numbers: %d\n", pos);
    printf("Number of negative numbers: %d\n", neg);

    return 0;
}
