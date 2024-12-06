#include <stdio.h>

int main() {
    float principle, rate, time, interest;

    printf("Input principle, Rate of interest & time to find simple interest:\n");
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);

    interest = (principle * rate * time) / 100;

    printf("Simple interest = %.2f\n", interest);

    return 0;
}
