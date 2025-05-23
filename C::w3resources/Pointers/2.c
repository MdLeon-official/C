#include <stdio.h>

int main() {
    int *ab;
    int m = 29;
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);

    printf("Now ab is assigned with the address of m.\n");

    ab = &m;
    printf("Address of pointer ab : %p\n", &ab);
    printf("Content of pointer ab : %d\n", *ab);

    printf("The value of m assigned to 34 now.");
    m = 34;
    printf("Address of pointer ab : %p\n", &ab);
    printf("Content of pointer ab : %d\n", *ab);

    printf("The pointer variable ab is assigned with the value 7 now.\n");
    *ab = 7;
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);


}
