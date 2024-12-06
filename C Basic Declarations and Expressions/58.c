#include <stdio.h>

int main() {
    double n1, n2, n3, n4;
    double max, min, diff;

    printf("Input four numbers: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    max = n1;
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;
    if(n4 > max) max = n4;

    min = n1;
    if(n2 < min) min = n2;
    if(n3 < min) min = n3;
    if(n4 < min) min = n4;

    diff = max - min;

    printf("Difference is %.4f\n", diff);

    return 0;
}
