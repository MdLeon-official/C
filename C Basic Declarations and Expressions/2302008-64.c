#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool condition = true;
    int count = 0;
    int max = 0;
    int min = 0;
    int sum = 0;
    bool first = true;

    while (condition) {
        printf("Enter positive number: (enter 0 or negative number to terminate): ");
        scanf("%d", &n);

        if (n <= 0) {
            condition = false;
            continue;
        }

        count++;
        sum = sum + n;

        if (first) {
            max = n;
            min = n;
            first = false;
        } else {
            if (n > max) {
                max = n;
            }
            if (n < min) {
                min = n;
            }
        }
    }

    printf("Number of positive values entered is %d\n", count);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %.3f\n", (float)sum/count);
}
