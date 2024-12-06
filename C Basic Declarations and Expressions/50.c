#include <stdio.h>
int main() {
    float arr[5];
    int i;
    printf("Input the 5 members of the array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &arr[i]);
    }
    for(i = 0; i < 5; i++) {
        if(arr[i] < 5) {
            printf("A[%d] = %.1f\n", i, arr[i]);
        }
    }
    return 0;
}
