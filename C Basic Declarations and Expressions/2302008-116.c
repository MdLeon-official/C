
#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Input two pairs values (integer values):\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 < num2)
    {
        printf("Ascending order");
    }
    else
    {
        printf("Descending order");
    }

return 0;
}
