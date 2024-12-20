#include <stdio.h>

int main() {
    int principal, days;
    float rate, interest;

    while (1) {
        printf("Enter  principal amount (0 to quit): ");
        scanf("%d", &principal);
        if (principal == 0) {
            return 0;
        }
        printf("Enter  total days: ");
        scanf("%d", &days);
        printf("Enter  rate: ");
        scanf("%f", &rate);

        interest = principal * rate * ((float)days/365);
        printf("Interest %.3f\n", interest);

    }

}
