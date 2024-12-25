
#include <stdio.h>

int main() {
    int array_nums[7];
    int i;

    printf("Input 7 array elements:\n");
    for(i = 0; i < 7; i++){
        scanf("%d", &array_nums[i]);
    }

    for(i = 0; i < 7; i++){
        if(array_nums[i] <= 0){
            array_nums[i] = 1;
        }
    }

    printf("\nArray elements:\n");
    for(i = 0; i < 7; i++){
        printf("array_nums[%d] = %d\n", i, array_nums[i]);
    }

    return 0;
}
