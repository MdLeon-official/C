#include <stdio.h>

int main() {
    int arr[6] = {0};
    int position = 0;
    int min;
    printf("Enter 5 input: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 1; i < 5; i++){
        if (arr[i] < min) {
            min = arr[i];
            position = i;
        }
    }
    printf("Smallest Value: %d\n", min);
    printf("Position of the element: %d", position);
    return 0;
}
