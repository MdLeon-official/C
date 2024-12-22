
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Celsius to Fahrenheit\n");
    printf("---------------------\n");
    printf("Celsius   Fahrenheit\n");

    celsius = 0;
    while(celsius <= 150) {
        fahrenheit = (celsius * 9/5) + 32;
        printf("%6.1f \t%7.1f\n", celsius, fahrenheit);
        celsius = celsius + 10;
    }

    printf("\n\n");

    printf("Fahrenheit to Celsius\n");
    printf("---------------------\n");
    printf("Fahrenheit  Celsius\n");

    fahrenheit = 0;
    while(fahrenheit <= 150) {
        celsius = (fahrenheit - 32) * 5/9;
        printf("%6.1f \t%7.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + 10;
    }

    return 0;
}
