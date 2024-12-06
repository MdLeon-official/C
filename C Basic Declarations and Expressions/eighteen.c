#include <stdio.h>

int main() {
    int days, years, months;

    printf("Input no. of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;

    printf("%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);

    return 0;
}
