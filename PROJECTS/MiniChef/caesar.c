#include "minichef.h"
#include <ctype.h>
#include <stdio.h>


void caesar_encrypt(const char *input, int key) {
    key = ((key % 26) + 26) % 26; // Normalize key to be between 0 and 25
    for(int i = 0; input[i] != '\0'; i++) {
        if(isalpha(input[i])) {
            char base = isupper(input[i]) ? 'A' : 'a';
            printf("%c", ((input[i] - base + key) % 26 + base));
        }else {
            printf("%c",input[i]);
        }
    }
    printf("\n");
}
void caesar_decrypt(const char *input, int key) {
    key = ((key % 26) + 26) % 26; // Normalize key to be between 0 and 25
    for(int i = 0; input[i] != '\0'; i++) {
        if(isalpha(input[i])) {
            char base = isupper(input[i]) ? 'A' : 'a';
            printf("%c", ((input[i] - base - key + 26) % 26) + base);
        } else {
            printf("%c", input[i]);
        }
    }
    printf("\n");
}
