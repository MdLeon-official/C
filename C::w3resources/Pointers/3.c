#include <stdio.h>

int main() {
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("Using & operator :\n----------------------\n");
    printf("Address of m = %p\n", &m);
    printf("Address of fx = %p\n", &fx);
    printf("Address of cht = %p\n", &cht);

printf("\n");

    printf("Using & and * operator :\n----------------------\n");
    printf("Value at address of m = %d\n", *(&m));
    printf("Value at address of fx = %f\n", *(&fx));
    printf("Value at address of cht = %c\n", *(&cht));

printf("\n");

    int *pt1 = &m;
    float *pt2 = &fx;
    char *pt3 = &cht;

    printf("Using only pointer variable :\n----------------------\n");
    printf("Address of m = %p\n", pt1);
    printf("Address of fx = %p\n", pt2);
    printf("Address of cht = %p\n", pt3);

printf("\n");

    printf("Using only pointer operator :\n----------------------\n");
    printf("Value at address of m = %d\n", *pt1);
    printf("Value at address of fx = %f\n", *pt2);
    printf("Value at address of cht = %c\n", *pt3);

    return 0;
}
