#include <stdio.h>

int main() {
    int arr[5], i, temp;

    printf("Input the 5 members of the array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5/2; i++) {
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }

    for (i = 0; i < 5; i++) {
        printf("array_n[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
