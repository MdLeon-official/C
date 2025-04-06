#include "minichef.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char *argv[]) {
    if (argc < 2) {
        printf("USE '%s -h or %s --help'\n",argv[0], argv[0]);
        return 1;
    }
    if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
        minichef_look();
        print_usage(argv[0]);
        return 1;
    }

    if ((strcmp(argv[1], "-ce")) == 0 && argc == 4) {
        caesar_encrypt(argv[2], atoi(argv[3]));
    }
    else if ((strcmp(argv[1], "-cd")) == 0 && argc == 4) {
        caesar_decrypt(argv[2], atoi(argv[3]));
    }
    else if ((strcmp(argv[1], "-be")) == 0) {
        base64_encode(argv[2]);
    }
    else if ((strcmp(argv[1], "-bd")) == 0) {
        base64_decode(argv[2]);
    }
    else if ((strcmp(argv[1], "-he")) == 0) {
        hex_encode(argv[2]);
    }
    else if ((strcmp(argv[1], "-hd")) == 0) {
        hex_decode(argv[2]);
    }
    else if ((strcmp(argv[1], "-ue")) == 0) {
        url_encode(argv[2]);
    }
    else if ((strcmp(argv[1], "-ud")) == 0) {
        url_decode(argv[2]);
    }
    else if ((strcmp(argv[1], "-r13")) == 0) {
        rot13_encrypt_decrypt(argv[2]);
    }
    else if ((strcmp(argv[1], "-r13")) == 0) {
        rot13_encrypt_decrypt(argv[2]);
    }
    else if ((strcmp(argv[1], "-r47")) == 0) {
        rot47_encrypt_decrypt(argv[2]);
    }
    else if ((strcmp(argv[1], "-xor")) == 0 && argc == 4) {
        xor_cipher(argv[2], atoi(argv[3]));
    }
    else if ((strcmp(argv[1], "-ab")) == 0) {
        ascii_to_binary(argv[2]);
    }
    else if ((strcmp(argv[1], "-ba")) == 0) {
        binary_to_ascii(argv[2]);
    }
    return 0;
}


//FOR PRINTING THE USAGE OF THIS TOOL
void print_usage(char *argv) {
    printf("Usage:\n");
    printf("%s -ce \"text\" key : Caesar Encrypt\n", argv);
    printf("%s -cd \"text\" key : Caesar Decrypt\n", argv);
    printf("%s -be \"text\"    : Base64 Encode\n", argv);
    printf("%s -bd \"text\"    : Base64 Decode\n", argv);
    printf("%s -he \"text\"    : Hex Encode\n", argv);
    printf("%s -hd \"text\"    : Hex Decode\n", argv);
    printf("%s -ue \"text\"    : URL Encode\n", argv);
    printf("%s -ud \"text\"    : URL Decode\n", argv);
    printf("%s -r13 \"text\" : ROT13 Encrypt/Decrypt\n", argv);
    printf("%s -r47 \"text\" : ROT47 Encrypt/Decrypt\n", argv);
    printf("%s -xor \"text\" key : XOR Encrypt/Decrypt\n", argv);
    printf("%s -ab \"text\"     : ASCII to Binary\n", argv);
    printf("%s -ba \"binary\"   : Binary to ASCII\n", argv);
    printf("\n");
}

//MINICHEF LOOK
void minichef_look() {
    printf("\n");
    printf(" ███▄ ▄███▓ ██▓ ███▄    █  ██▓ ▄████▄   ██░ ██ ▓█████   █████▒\n");
    printf("▓██▒▀█▀ ██▒▓██▒ ██ ▀█   █ ▓██▒▒██▀ ▀█  ▓██░ ██▒▓█   ▀ ▓██   ▒ \n");
    printf("▓██    ▓██░▒██▒▓██  ▀█ ██▒▒██▒▒▓█    ▄ ▒██▀▀██░▒███   ▒████ ░ \n");
    printf("▒██    ▒██ ░██░▓██▒  ▐▌██▒░██░▒▓▓▄ ▄██▒░▓█ ░██ ▒▓█  ▄ ░▓█▒  ░ \n");
    printf("▒██▒   ░██▒░██░▒██░   ▓██░░██░▒ ▓███▀ ░░▓█▒░██▓░▒████▒░▒█░    \n");
    printf("░ ▒░   ░  ░░▓  ░ ▒░   ▒ ▒ ░▓  ░ ░▒ ▒  ░ ▒ ░░▒░▒░░ ▒░ ░ ▒ ░    \n");
    printf("░  ░      ░ ▒ ░░ ░░   ░ ▒░ ▒ ░  ░  ▒    ▒ ░▒░ ░ ░ ░  ░ ░      \n");
    printf("░      ░    ▒ ░   ░   ░ ░  ▒ ░░         ░  ░░ ░   ░    ░ ░    \n");
    printf("       ░    ░           ░  ░  ░ ░       ░  ░  ░   ░  ░        \n");
    printf("                              ░                                \n");
    printf("                   By LEON              \n");
    printf("\n");
}
