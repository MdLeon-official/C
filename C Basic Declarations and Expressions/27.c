#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;
    int positive = 0;
    int negative = 0;

    printf("Input the first number: ");
    scanf("%d", &n1);

    printf("Input the second number: ");
    scanf("%d", &n2);

    printf("Input the third number: ");
    scanf("%d", &n3);

    printf("Input the fourth number: ");
    scanf("%d", &n4);

    printf("Input the fifth number: ");
    scanf("%d", &n5);

    if(n1 > 0)
        positive++;
    if(n1 < 0)
        negative++;

    if(n2 > 0)
        positive++;
    if(n2 < 0)
        negative++;

    if(n3 > 0)
        positive++;
    if(n3 < 0)
        negative++;

    if(n4 > 0)
        positive++;
    if(n4 < 0)
        negative++;

    if(n5 > 0)
        positive++;
    if(n5 < 0)
        negative++;

    printf("Number of positive numbers: %d\n", positive);
    printf("Number of negative numbers: %d", negative);

    return 0;
}
