#include <stdio.h>

int main() {
    float rice_price, sugar_price;

    printf("Enter the price of rice: ");
    scanf("%f", &rice_price);

    printf("Enter the price of sugar: ");
    scanf("%f", &sugar_price);

    printf("**List of Items**\n");
    printf("Item\tPrice\n");
    printf("Rice\tRs. %.2f\n", rice_price);
    printf("Sugar\tRs. %.2f\n", sugar_price);

    return 0;
}
