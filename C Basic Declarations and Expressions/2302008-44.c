#include <stdio.h>

int main() {
    int marks[100];
    int i = 0;
    int sum = 0;
    float average;

    printf("Input Mathematics marks (0 to terminate): ");
    scanf("%d", &marks[i]);

    while(marks[i] > 0) {
        sum += marks[i];
        i++;
        printf("Input Mathematics marks (0 to terminate): ");
        scanf("%d", &marks[i]);
    }

    if(i > 0) {
        average = (float)sum / i;
        printf("Average marks in Mathematics: %.2f\n", average);
    }

    return 0;
}
