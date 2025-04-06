#include <stdio.h>
#include <ctype.h>

void xor_cipher(const char* input, int key) {
    int i = 0;
    while (input[i] != '\0') {
        char result = input[i] ^ key;

        if (isprint(result)) {
            printf("%c", result);
        } else {
            printf(" ");
        }
        i++;
    }

    printf("\n");
}
