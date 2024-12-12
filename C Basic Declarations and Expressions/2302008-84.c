#include <stdio.h>

int main () {
    int condition = 1;
    int num;
    int sum = 0, count = 0;
    printf("Input each number on a separate line (888 to exit):\n");
    while (condition) {
        scanf("%d", &num);
        if (num == 888) {
            condition = 0;
        } else {
            count++;
            sum = sum + num;
        }
    }
    printf("The average value of the said numbers is %f\n",(float)sum/count);
}
