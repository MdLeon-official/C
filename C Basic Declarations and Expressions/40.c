#include <stdio.h>

int main() {
    int start, end;

    printf("Input the first integer: ");
    scanf("%d", &start);

    printf("Input the second integer: ");
    scanf("%d", &end);

    for(int i=start; i<=end; i++) {
        int remainder = i % 7;
        if(remainder == 2 || remainder == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
