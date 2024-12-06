#include <stdio.h>

int main() {
    int firstNum, secondNum;

    printf("Input the first number: ");
    scanf("%d", &firstNum);

    printf("Input the second number: ");
    scanf("%d", &secondNum);

    if(secondNum % firstNum == 0) {
        printf("Multiplied!\n");
    } else {
        printf("Not multiplied!\n");
    }

    return 0;
}
