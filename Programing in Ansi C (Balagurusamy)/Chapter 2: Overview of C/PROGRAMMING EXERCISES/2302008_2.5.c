#include <stdio.h>

int main() {
    float distance, time, speed;

    printf("Distance (in km): ");
    scanf("%f", &distance);

    printf("Time (in hours): ");
    scanf("%f", &time);

    speed = distance / time;

    printf("The speed of the car is %.2f km/hr\n", speed);

    return 0;
}
