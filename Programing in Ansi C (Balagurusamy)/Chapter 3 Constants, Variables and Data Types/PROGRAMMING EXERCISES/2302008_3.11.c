#include <stdio.h>

int main() {
    float distance, fuel, mileage;

    printf("Distance (in km): ");
    scanf("%f", &distance);

    printf("Fuel consumed (in liters): ");
    scanf("%f", &fuel);

    mileage = distance / fuel;

    printf("Mileage of the car = %.2f km/L\n", mileage);

    return 0;
}
