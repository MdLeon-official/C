#include <stdio.h>

int main()
{
    int dis;
    float lit;

    printf("Input total distance in km: ");
    scanf("%d", &dis);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &lit);

    float ans = dis/lit;
    printf("Average consumption: %.3f\n", ans);

    return 0;
}
