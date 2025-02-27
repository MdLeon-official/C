// Feb 28, 2025


#include <stdio.h>
#include <math.h>

// Addition
void addition(float a, float b) {
    float result = a + b;
    printf("Result: %.2f\n", result);
}

// Subtraction
void subtraction(float a, float b) {
    float result = a - b;
    printf("Result: %.2f\n", result);
}

// Multiplication
void multiplication(float a, float b) {
    float result = a * b;
    printf("Result: %.2f\n", result);
}

// Division
void division(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
    } else {
        float result = a / b;
        printf("Result: %.2f\n", result);
    }
}

// Power
void power(float a, float b) {
    float result = pow(a, b);
    printf("Result: %.2f\n", result);
}

// Exit game
int exit_program() {
    printf("Do you wanna use calculator again? (y/n): ");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        return 1;
    } else if (choice == 'n' || choice == 'N') {
        return 0;
    } else {
        printf("Invalid choice. Exiting...\n");
        return 0;
    }
}

int main() {
    int wanna_play = 1;
    float number_1, number_2;
    int choice;

    while (wanna_play) {
        printf("\nChoose one of the following options:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You chose Addition\n");
                printf("Enter the first number: ");
                scanf("%f", &number_1);
                printf("Enter the second number: ");
                scanf("%f", &number_2);
                addition(number_1, number_2);
                wanna_play = exit_program();
                break;
            case 2:
                printf("You chose Subtraction\n");
                printf("Enter the first number: ");
                scanf("%f", &number_1);
                printf("Enter the second number: ");
                scanf("%f", &number_2);
                subtraction(number_1, number_2);
                wanna_play = exit_program();
                break;
            case 3:
                printf("You chose Multiplication\n");
                printf("Enter the first number: ");
                scanf("%f", &number_1);
                printf("Enter the second number: ");
                scanf("%f", &number_2);
                multiplication(number_1, number_2);
                wanna_play = exit_program();
                break;
            case 4:
                printf("You chose Division\n");
                printf("Enter the first number: ");
                scanf("%f", &number_1);
                printf("Enter the second number: ");
                scanf("%f", &number_2);
                division(number_1, number_2);
                wanna_play = exit_program();
                break;
            case 5:
                printf("You chose Power\n");
                printf("Enter the base number: ");
                scanf("%f", &number_1);
                printf("Enter the exponent: ");
                scanf("%f", &number_2);
                power(number_1, number_2);
                wanna_play = exit_program();
                break;
            case 6:
                printf("Exiting...\n");
                wanna_play = 0;
                break;
            default:
                printf("Invalid choice\n");
                wanna_play = exit_program();
                break;
        }
    }

    printf("Thank you for using the calculator!\n");
    return 0;
}
