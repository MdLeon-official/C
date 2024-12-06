#include <stdio.h>

int main()
{
    float weight1, weight2, num1, num2;
    float avg;

    printf("Weight - Item1: ");
    scanf("%f", &weight1);

    printf("No. of item1: ");
    scanf("%f", &num1);

    printf("Weight - Item2: ");
    scanf("%f", &weight2);

    printf("No. of item2: ");
    scanf("%f", &num2);

    avg = ((weight1 * num1) + (weight2 * num2)) / (num1 + num2);

    printf("Average Value = %f\n", avg);

    return 0;
}
