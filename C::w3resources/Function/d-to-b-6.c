#include <stdio.h>

void number(int n1);

int main() {
    int d;
    printf("Enter a decimal number: ");
    scanf("%d", &d);
    number(d);
}

void number(int n1) {
    int arr[1000];
    int index = 0;
    while (n1 > 0) {
        arr[index] = n1 % 2;
        n1 = n1 / 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
            printf("%d", arr[i]);
    }
    printf("\n");
}
