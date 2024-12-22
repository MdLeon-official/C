
#include <stdio.h>

int main() {
    float money;
    int notes100, notes50, notes5, notes2;
    int coins50, coins25;
    float leftover;

    printf("Input the currency value (floating point with two decimal places):\n");
    scanf("%f", &money);

    notes100 = money/100;
    leftover = money - (notes100 * 100);

    notes50 = leftover/50;
    leftover = leftover - (notes50 * 50);

    notes5 = leftover/5;
    leftover = leftover - (notes5 * 5);

    notes2 = leftover/2;
    leftover = leftover - (notes2 * 2);

    coins50 = leftover/0.50;
    leftover = leftover - (coins50 * 0.50);

    coins25 = leftover/0.25;

    printf("\nCurrency Notes:\n");
    printf("100 number of Note(s): %d\n", notes100);
    printf("50 number of Note(s): %d\n", notes50);
    printf("5 number of Note(s): %d\n", notes5);
    printf("2 number of Note(s): %d\n", notes2);

    printf("\nCurrency Coins:\n");
    printf(".50 number of Coin(s): %d\n", coins50);
    printf(".25 number of Coin(s): %d\n", coins25);

    return 0;
}
