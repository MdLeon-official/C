#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,avg;

    printf("Input five subject marks(0-100):\n");

    scanf("%f", &s1);
    scanf("%f", &s2);
    scanf("%f", &s3);
    scanf("%f", &s4);
    scanf("%f", &s5);

    avg = (s1+s2+s3+s4+s5)/5;

    printf("Average marks = %.2f\n", avg);

    return 0;
}
