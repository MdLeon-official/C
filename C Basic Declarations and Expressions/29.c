#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    int sum = 0;

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

    if(num1 % 2 != 0)
    {
        sum = sum + num1;
    }

    if(num2 % 2 != 0)
    {
        sum = sum + num2;
    }

    if(num3 % 2 != 0)
    {
        sum = sum + num3;
    }

    if(num4 % 2 != 0)
    {
        sum = sum + num4;
    }

    if(num5 % 2 != 0)
    {
        sum = sum + num5;
    }

    printf("Sum of all odd values: %d\n", sum);

    return 0;
}
