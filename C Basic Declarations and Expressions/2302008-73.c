#include <stdio.h>

int main()
{
    int x,y;
    printf("Sample Input: ");
    scanf("%d %d", &x, &y);
    if(x%y == 0){
        printf("%d is a multiple of %d\n",x,y);
    }
    else{
        printf("%d is a not multiple of %d\n",x,y);
    }
}
