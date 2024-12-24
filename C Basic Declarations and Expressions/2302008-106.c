
#include <stdio.h>

int main()
{
    int i, num;
    int even = 0, odd = 0, pos = 0, neg = 0;

    printf("Input 7 integers:\n");

    for(i = 1; i <= 7; i++)
    {
        scanf("%d", &num);

        if(num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(num > 0)
        {
            pos++;
        }
        else if(num < 0)
        {
            neg++;
        }
    }

    printf("\nNumber of even values: %d\n", even);
    printf("Number of odd values: %d\n", odd);
    printf("Number of positive values: %d\n", pos);
    printf("Number of negative values: %d\n", neg);

    return 0;
}
