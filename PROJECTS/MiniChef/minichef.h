#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//BASIC
void print_usage(char *argv);
void minichef_look();
// CAESAR CIPHER ==> Done
void caesar_encrypt(const char *input, int key);
void caesar_decrypt(const char *input, int key);
//BASE64 ==> Done
void base64_encode(const char *input);
void base64_decode(const char *input);
//HEX ==> Done
void hex_encode(const char *input);
void hex_decode(const char *input);
//URL ==> Done
void url_encode(const char *input);
void url_decode(const char *input);
//ROT13 ==> Done
void rot13_encrypt_decrypt(const char *input);
//ROT47 ==> Done
void rot47_encrypt_decrypt(const char *input);
// XOR ==> Done
void xor_cipher(const char* input, int key);
// BINARY <--> ASCII ==> Done
void binary_to_ascii(const char* binary_input);
void ascii_to_binary(const char* input);



//--------------------------------------------------------------------------!
//RSA ==> Skipped for now
// void encrypt_file(const char *input_file, const char *output_file, const char *pub_file);
// void decrypt_file(const char *input_file, const char *output_file, const char *priv_file);
//MD5 ==> skipped for now
// void md5_encode(const char *input);
//SHA256 ==> skipped for now
// void sha256_encode(const char *input);
