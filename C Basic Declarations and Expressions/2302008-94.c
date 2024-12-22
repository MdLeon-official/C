
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Input the weight: ");
    scanf("%f", &weight);

    printf("Input the height: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI = %f\n", bmi);

    printf("Grade: ");
    if(bmi < 18.5)
        printf("Under\n");
    else if(bmi >= 18.5 && bmi < 25)
        printf("Normal\n");
    else if(bmi >= 25 && bmi < 30)
        printf("Over\n");
    else
        printf("Obese\n");

    return 0;
}
