#include <stdio.h>
int main()
{
    int i, num;

    printf("Input an integer: ");
    scanf("%d", &num);

    for(i=1; i<=100; i++) {
        if(i % num == 3) {
            printf("%d\n", i);
        }
    }
    return 0;
}
