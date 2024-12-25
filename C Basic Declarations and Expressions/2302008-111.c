
#include <stdio.h>
int main()
{
    int num;
    int i;
    printf("Input a number (integer):\n");
    scanf("%d", &num);
    printf("\nRemainder value is 3 after divide all numbers between 1 and 100 by %d:\n", num);
    for(i = 1; i <= 100; i++)
    {
        if(i % num == 3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
