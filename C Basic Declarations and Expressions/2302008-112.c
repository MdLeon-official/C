#include <stdio.h>

int main() {
    int numbers[6];
    int max;
    int position;

    printf("Input 6 numbers (integer values):\n");
    scanf("%d", &numbers[0]);
    max = numbers[0];
    position = 1;

    for(int i = 1; i < 6; i++) {
        scanf("%d", &numbers[i]);
        if(numbers[i] > max) {
            max = numbers[i];
            position = i + 1;
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Position: %d\n", position);

    return 0;
}
