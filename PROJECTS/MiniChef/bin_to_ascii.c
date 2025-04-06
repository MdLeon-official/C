#include "minichef.h"


void binary_to_ascii(const char* binary_input) {
    int len = strlen(binary_input);
    char byte[9];
    int i;

    for(i = 0; i < len; i += 8) {
        strncpy(byte, &binary_input[i], 8);
        byte[8] = '\0';

        int val = 0;
        int pow = 1;

        for(int j = 7; j >= 0; j--) {
            if(byte[j] == '1') {
                val += pow;
            }
            pow *= 2;
        }

        printf("%c", (char)val);
    }
    printf("\n");
}

void ascii_to_binary(const char* input) {
    int len = strlen(input);

    for(int i = 0; i < len; i++) {
        char c = input[i];

        for(int j = 7; j >= 0; j--) {
            if(c & (1 << j)) {
                printf("1");
            } else {
                printf("0");
            }
        }
    }
    printf("\n");
}
