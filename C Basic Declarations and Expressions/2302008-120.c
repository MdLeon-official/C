
#include <stdio.h>
int main() {
    int num;
    int i;
    printf("Input a number(integer):\n");
    scanf("%d", &num);
    printf("Sequence:\n");
    for(i = 1; i <= num; i++) {
        if(i < num) {
            printf("%d,", i);
        }
        else {
            printf("%d", i);
        }
    }
    return 0;
}
