#include <stdio.h>


int main() {
    int first, second, *ptr1, *ptr2, sum;

    printf("Input the first number : ");
    scanf("%d", &first);
    printf("Input the second number : ");
    scanf("%d", &second);

    ptr1 = &first;
    ptr2 = &second;
    sum = *ptr1 + *ptr2;

    printf("\nThe sum of the entered numbers is : %d\n", sum);

    return 0;
}
