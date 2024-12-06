#include <stdio.h>

int main()
{
    float s = 0;
    int i;

    for(i = 1; i <= 50; i++)
    {
        s = s + 1.0/i;
    }

    printf("Value of S: %.2f\n", s);

    return 0;
}
