#include <stdio.h>
#include <math.h>

void check(int number);

int main() {
    int number;
    printf("Input any number: ");
    scanf("%d", &number);
    check(number);
}

void check(int number) {
    int original = number;
    int arr[100];
    int i = 0;
    int arm_sum = 0;
    int perf_sum = 0;

    while (number > 0) {
        int num_digit = number % 10;
        arr[i] = num_digit;
        number /= 10;
        i++;
    }

    for(int j = 0; j < i; j++) {
        arm_sum += pow(arr[j], 3);
    }

    for(int k = 1; k < original; k++) {
        if(original % k == 0) {
            perf_sum += k;
        }
    }

    if (arm_sum == original) {
        printf(" The %d is an Armstrong number.\n", original);
    } else {
        printf(" The %d is not an Armstrong number.\n", original);
    }

    if (perf_sum == original) {
        printf(" The %d is a Perfect number.\n", original);
    } else {
        printf(" The %d is not a Perfect number.\n", original);
    }
}
