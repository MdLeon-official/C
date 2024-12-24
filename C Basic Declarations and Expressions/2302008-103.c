#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Input two integers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num2 % num1 == 0 || num1 % num2 == 0) {
        printf("Multiplies\n");
    }
    else {
        printf("Not Multiples\n");
    }

    return 0;
}
