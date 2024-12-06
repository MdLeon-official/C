#include <stdio.h>

int main() {
    char i[10000];
    float h, s, t;

    printf("Input the Employees ID: ");
    scanf("%s", i);

    printf("Input the working hrs: ");
    scanf("%f", &h);

    printf("Salary amount/hr: ");
    scanf("%f", &s);

    t = h * s;

    printf("Employees ID = %s\n", i);
    printf("Salary = U$ %.2f\n", t);

    return 0;
}
