#include "minichef.h"

void rot13_encrypt_decrypt(const char *input) {
    int i = 0;
    while(input[i] != '\0') {
        char c = input[i];
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
                printf("%c", c + 13);
            else
                printf("%c", c - 13);
        } else {
            printf("%c", c);
        }
        i++;
    }
    printf("\n");
}
