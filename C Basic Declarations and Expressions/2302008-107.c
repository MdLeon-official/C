
#include <stdio.h>

int main() {
    int num;
    int i;

    printf("Input an integer number:\n");
    scanf("%d", &num);

    printf("\nNext 10 consecutive odd numbers:\n");
    for(i = 1; i <= 10; i++) {
        if(num % 2 == 0)
            num = num + 1;
        printf("%d, ", num + 2*i);
    }

    printf("\n\nNext 10 consecutive even numbers:\n");
    for(i = 1; i <= 10; i++) {
        if(num % 2 != 0)
            num = num + 1;
        printf("%d, ", num + 2*i);
    }
    printf("\n");

    return 0;
}
