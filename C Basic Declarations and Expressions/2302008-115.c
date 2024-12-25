
#include <stdio.h>

int main() {
    int num1, num2;
    int i;
    float sum = 0;
    int count = 0;
    int min, max;

    printf("Input two pairs values (integer values):\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 < num2) {
        min = num1;
        max = num2;
    }
    else {
        min = num2;
        max = num1;
    }

    printf("\nSequence from the lowest to highest number:\n");
    for(i = min; i <= max; i++) {
        printf("%d ", i);
        sum += i;
        count++;
    }

    printf("\nAverage value of the said sequence\n");
    printf("    %.2f\n", sum/count);

    return 0;
}
