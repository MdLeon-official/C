#include "minichef.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hex_encode(const char *input) {
    int len = strlen(input);
    char chr;
    for(int i = 0; i < len; i++) {
        printf("%02X", (unsigned char)input[i]);
    }
    printf("\n");
}
void hex_decode(const char *input) {
    int len = strlen(input);
    if (len % 2 != 0) {
        printf("Invalid Hex Input...!\n");
        return;
    }
    for (int i = 0; i < len; i+=2) {
        char take_hex[3] = {input[i], input[i + 1], '\0'};
        printf("%c", (char)strtol(take_hex, NULL, 16));
    }
    printf("\n");
}
