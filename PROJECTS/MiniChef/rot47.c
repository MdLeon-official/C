#include "minichef.h"
#include <stdio.h>

void rot47_encrypt_decrypt(const char *input) {
    if (!input) {
        return;
    }

    int i = 0;
    char c;
    while (input[i] != '\0') {
        c = input[i];
        if (c >= 33 && c <= 126) {
            c = 33 + ((c - 33 + 47) % 94);
        }
        printf("%c", c);
        i++;
    }
    printf("\n");
}
