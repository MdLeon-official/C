#include <stdio.h>
#include <sys/types.h>

int sum_nums(int *f, int *s);


int main() {
    int first, second, sum;

    printf("Input the first number : ");
    scanf("%d", &first);
    printf("Input the second number : ");
    scanf("%d", &second);

    printf("\nThe sum of %d and %d is : %d\n", first, second, sum_nums(&first, &second));

    return 0;
}

int sum_nums(int *f, int *s)
{
    int sum;
    sum = *f + *s;
    return sum;
}
