
#include <stdio.h>

int main() {
    int n;
    int values[10];

    printf("Input number of histogram bar (Maximum 10):\n");
    scanf("%d", &n);

    printf("Input the values between 0 and 10 (separated by space):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    printf("\nHistogram:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < values[i]; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
