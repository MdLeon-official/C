#include<stdio.h>

int main()
{
    int p, q, r, s;
    printf("Input the first integer: ");
    scanf("%d", &p);
    printf("Input the second integer: ");
    scanf("%d", &q);
    printf("Input the third integer: ");
    scanf("%d", &r);
    printf("Input the fourth integer: ");
    scanf("%d", &s);

    if(q > 0 && r > 0 && s > 0 && p % 2 == 0)
    {
        if(q > r && s > p && r + s > p + q)
        {
            printf("Correct values\n");
        }
        else
        {
            printf("Wrong values\n");
        }
    }
    else
    {
        printf("Wrong values\n");
    }

    return 0;
}
