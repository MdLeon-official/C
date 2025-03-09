#include <stdio.h>

int main() {
    int days;

    printf("Enter the year: ");
    scanf("%d", &days);

    int years = days / 365;
    days = days % 365;

    int months = days / 30;
    days = days % 30;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", days);

    return 0;
}
