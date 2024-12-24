
#include <stdio.h>

int main() {
    float numbers[7];
    int pos_count = 0, neg_count = 0;
    float pos_sum = 0, neg_sum = 0;

    printf("Input 7 numbers(int/float):\n");

    for(int i = 0; i < 7; i++) {
        scanf("%f", &numbers[i]);

        if(numbers[i] >= 0) {
            pos_count++;
            pos_sum += numbers[i];
        }
        else {
            neg_count++;
            neg_sum += numbers[i];
        }
    }

    float pos_avg = pos_count > 0 ? pos_sum/pos_count : 0;
    float neg_avg = neg_count > 0 ? neg_sum/neg_count : 0;

    printf("\n%d Number of positive numbers: Average %.2f\n", pos_count, pos_avg);
    printf("\n%d Number of negative numbers: Average %.2f\n", neg_count, neg_avg);

    return 0;
}
