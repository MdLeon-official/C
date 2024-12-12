#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number = 50;
    int i;

    srand(time(NULL));

    printf("%d\n", number);
    for(i = 0; i < number; i++) {
        double random_num = ((double)rand() / RAND_MAX) - 0.5;
        printf("%.4f\n", random_num);
    }

    return 0;
}
