#include <stdio.h>
#include <math.h>

int main() {
    int number, digit;
    printf("Enter a 7 digit number: ");
    scanf("%d", &number);

    for(int i = 6; i >= 0; i--){
        digit = number / (int) pow(10, i);
        printf("%d ", digit);
        number = number % (int) pow(10, i);
    }
}
