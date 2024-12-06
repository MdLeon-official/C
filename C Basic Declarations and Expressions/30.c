#include <stdio.h>
#include <math.h>

int main()
{
    int n = 4;
    int i;

    printf("List of square of each one of the even values from 1 to %d:\n", n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            printf("%d^2 = %.0f\n", i, pow(i, 2));
        }
    }

    return 0;
}
