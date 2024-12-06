#include <stdio.h>
int main()
{
    int number;
    printf("Input an integer: ");
    scanf("%d", &number);

    if(number == 0) {
        printf("Even");
    }
    else if(number > 0) {
        if(number % 2 == 0) {
            printf("Positive Even");
        }
        else {
            printf("Positive Odd");
        }
    }
    else {
        if(number % 2 == 0) {
            printf("Negative Even");
        }
        else {
            printf("Negative Odd");
        }
    }

    return 0;
}
