#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    int count = 0;
    float sum = 0;

    printf("Input the first number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    printf("Input the third number: ");
    scanf("%d", &num3);

    printf("Input the fourth number: ");
    scanf("%d", &num4);

    printf("Input the fifth number: ");
    scanf("%d", &num5);

    if(num1 > 0){
        count++;
        sum += num1;
    }
    if(num2 > 0){
        count++;
        sum += num2;
    }
    if(num3 > 0){
        count++;
        sum += num3;
    }
    if(num4 > 0){
        count++;
        sum += num4;
    }
    if(num5 > 0){
        count++;
        sum += num5;
    }

    printf("Number of positive numbers: %d\n", count);
    printf("Average value of the said positive numbers: %.2f", sum/count);

    return 0;
}
