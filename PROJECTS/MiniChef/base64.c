#include "minichef.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

const char base64_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void base64_encode(const char *input) {
    size_t len = strlen(input);
    char *encoded = (char *)malloc(((len + 2) / 3) * 4 + 1);
    if (!encoded) {
        printf("Memory allocation failed!\n");
        return;
    }

    int index = 0;
    for (size_t i = 0; i < len; i += 3) {
        int val = ((unsigned char)input[i] << 16);

        if (i + 1 < len) {
            val |= ((unsigned char)input[i + 1] << 8);
        }
        if (i + 2 < len) {
            val |= (unsigned char)input[i + 2];
        }

        encoded[index++] = base64_chars[(val >> 18) & 0x3F];
        encoded[index++] = base64_chars[(val >> 12) & 0x3F];
        encoded[index++] = (i + 1 < len) ? base64_chars[(val >> 6) & 0x3F] : '=';
        encoded[index++] = (i + 2 < len) ? base64_chars[val & 0x3F] : '=';
    }

    encoded[index] = '\0';
    printf("%s\n", encoded);
    free(encoded);
}

void base64_decode(const char *input) {
    size_t len = strlen(input);
    if (len % 4 != 0) {
        printf("Invalid base64 string length\n");
        return;
    }

    char *decoded = (char *)malloc(len * 3 / 4 + 1);
    if (!decoded) {
        printf("Memory allocation failed!\n");
        return;
    }

    int i, j = 0;
    int val = 0;
    int pad = 0;

    for (i = 0; i < len; i++) {
        if (input[i] == '=') {
            pad++;
            val <<= 6;
            continue;
        }

        const char *p = strchr(base64_chars, input[i]);
        if (p == NULL) {
            printf("Invalid character in input\n");
            free(decoded);
            return;
        }

        val = (val << 6) | (p - base64_chars);

        if (i % 4 == 3) {
            decoded[j++] = (val >> 16) & 0xFF;
            if (pad < 2) decoded[j++] = (val >> 8) & 0xFF;
            if (pad < 1) decoded[j++] = val & 0xFF;
            val = 0;
        }
    }

    decoded[j] = '\0';
    printf("%s\n", decoded);
    free(decoded);
}
