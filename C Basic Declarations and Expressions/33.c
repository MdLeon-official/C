#include <stdio.h>

int main() {
    int nums[100];
    int i, n = 5;
    int max = 0;
    int pos = 0;

    printf("Input 5 integers:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if(nums[i] > max) {
            max = nums[i];
            pos = i + 1;
        }
    }

    printf("Highest value: %d\n", max);
    printf("Position: %d\n", pos);

    return 0;
}
