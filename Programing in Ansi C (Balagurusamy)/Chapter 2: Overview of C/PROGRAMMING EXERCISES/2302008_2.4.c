# include <stdio.h>

int main(){
    int a, b, c;
    float x;

    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    x = (float)a/b - c;

    printf("x = %.2f\n", x);
}

 //OUtpUt
 // Enter the values of a, b and c: 250 85 25
 // x = -22.06

 // Enter the values of a, b and c: 300 70 70
 // x = -65.71
