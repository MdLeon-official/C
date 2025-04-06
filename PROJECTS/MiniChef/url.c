#include "minichef.h"

void url_encode(const char *input) {
    int i;
    const char *hex = "0123456789ABCDEF";

    if (input == NULL) return;

    for (i = 0; input[i] != '\0'; i++) {
        if (isalnum(input[i]) || input[i] == '-' || input[i] == '_' || input[i] == '.' || input[i] == '~') {
            putchar(input[i]);
        } else if (input[i] == ' ') {
            putchar('+');
        } else {
            putchar('%');
            putchar(hex[(input[i] & 0xF0) >> 4]);
            putchar(hex[input[i] & 0x0F]);
        }
    }

    printf("\n");
}

void url_decode(const char *input) {
    int i;
    char hex[3] = {0};
    int value;

    if (input == NULL) return;

    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == '%') {
            if (input[i+1] && input[i+2]) {
                hex[0] = input[i+1];
                hex[1] = input[i+2];
                sscanf(hex, "%x", &value);
                putchar(value);
                i += 2;
            }
        } else if (input[i] == '+') {
            putchar(' ');
        } else {
            putchar(input[i]);
        }
    }
    printf("\n");
}
