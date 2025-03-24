#include <stdio.h>

void arr_check(int arr[]);

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    arr_check(arr);
}

void arr_check(int arr[]) {
    int max = arr[0];
    for(int i = 0; i < 5; i++){
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", max);
}
