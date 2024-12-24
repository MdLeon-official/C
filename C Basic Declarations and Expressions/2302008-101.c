
#include <stdio.h>

int main() {
    float num;

    printf("Input a number: ");
    scanf("%f", &num);

    if(num >= 0 && num <= 20) {
        printf("Range [0,20]");
    }
    else if(num > 20 && num <= 40) {
        printf("Range (20,40]");
    }
    else if(num > 40 && num <= 60) {
        printf("Range (40,60]");
    }
    else if(num > 80 && num <= 100) {
        printf("Range (80,100]");
    }

    return 0;
}
