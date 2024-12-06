#include<stdio.h>
int main()
{
    float x,y;
    printf("Input the Coordinate(x,y):\n");
    printf("x: ");
    scanf("%f",&x);
    printf("y: ");
    scanf("%f",&y);
    if(x>0 && y>0)
    {
        printf("Quadrant-I(+,+)");
    }
    else if(x<0 && y>0)
    {
        printf("Quadrant-II(-,+)");
    }
    else if(x<0 && y<0)
    {
        printf("Quadrant-III(-,-)");
    }
    else if(x>0 && y<0)
    {
        printf("Quadrant-IV(+,-)");
    }
    return 0;
}
