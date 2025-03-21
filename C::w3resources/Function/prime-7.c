#include <stdio.h>
#include <stdbool.h>

bool number(int n1);

int main() {
    int d;
    printf("Enter a number: ");
    scanf("%d", &d);

    if (number(d)) {
        printf("PRIME\n");
    } else {
        printf("NOT PRIME\n");
    }
    return 0;
}

bool number(int n1) {
    if (n1 < 2) {
        return false;
    }

    for (int i = 2; i < n1; i++) {
        if (n1 % i == 0) {
            return false;
        }
    }

    return true;
}
