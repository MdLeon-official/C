
#include <stdio.h>

int main() {
    int array_nums[7];
    int first_element;

    printf("Input the first element of the array:\n");
    scanf("%d", &first_element);

    array_nums[0] = first_element;

    for(int i = 1; i < 7; i++) {
        array_nums[i] = array_nums[i-1] * 2;
    }

    printf("\nArray elements:\n");
    for(int i = 0; i < 7; i++) {
        printf("array_nums[%d] = %d\n", i, array_nums[i]);
    }

    return 0;
}
