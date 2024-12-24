
#include <stdio.h>
int main()
{
    float price, increased_price;

    printf("Input the item price:");
    scanf("%f", &price);

    if (price >= 100 && price <= 400){
        increased_price = price * 0.14;
        price = price + increased_price;
        printf("New Item price: %.2f\n", price);
        printf("Increased price: %.2f\n", increased_price);
        printf("Increase Percentage: 14%%\n");
    }
    else if (price > 400 && price <= 800){
        increased_price = price * 0.11;
        price = price + increased_price;
        printf("New Item price: %.2f\n", price);
        printf("Increased price: %.2f\n", increased_price);
        printf("Increase Percentage: 11%%\n");
    }
    else if (price > 800 && price <= 1200){
        increased_price = price * 0.09;
        price = price + increased_price;
        printf("New Item price: %.2f\n", price);
        printf("Increased price: %.2f\n", increased_price);
        printf("Increase Percentage: 9%%\n");
    }
    else if (price > 1200 && price <= 2000){
        increased_price = price * 0.06;
        price = price + increased_price;
        printf("New Item price: %.2f\n", price);
        printf("Increased price: %.2f\n", increased_price);
        printf("Increase Percentage: 6%%\n");
    }
    else{
        increased_price = price * 0.03;
        price = price + increased_price;
        printf("New Item price: %.2f\n", price);
        printf("Increased price: %.2f\n", increased_price);
        printf("Increase Percentage: 3%%\n");
    }
}
