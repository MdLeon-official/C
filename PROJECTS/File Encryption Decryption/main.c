#include <stdio.h>
#include <unistd.h>
void encrypt_file(char *filename, int key);
void decrypt_file(char *filename, int key);

int main () {
    char filename[100];
    int key;
    printf("Enter your Filename: ");
    scanf("%s", filename);
    printf("Enter key: (remember this key) ");
    scanf("%d", &key);

    printf("Would you like to encrypt a file or decrypt a file? (1 or 2): \n");
    printf("1. Encrypt\n2. Decrypt\nYour choice is: ");
    int enc_or_dec;
    scanf("%d", &enc_or_dec);

    if (enc_or_dec == 1) {
        printf("You choosed encryption.\n");
        printf(".....\n");
        sleep(1);
        printf(".........\n");
        sleep(1);
        printf(".............\n");
        sleep(1);
        encrypt_file(filename, key);
    }
    else if (enc_or_dec == 2) {
        printf("You choosed decryption.\n");
        printf(".....\n");
        sleep(1);
        printf(".........\n");
        sleep(1);
        printf(".............\n");
        sleep(1);
        decrypt_file(filename, key);
    }
    else {
        printf("Invalid Choice.\n");
    }

}


void encrypt_file(char *filename, int key) {
    FILE *store_file, *create_temp_file;
    char file_content_as_char;

    store_file = fopen(filename, "r");
    if (store_file == NULL) {
        printf("Error! File not found.\n");
        return;
    }

    create_temp_file = fopen("temp.txt", "w");
    if (create_temp_file == NULL) {
        printf("Error! Can't create temporary file.\n");
        fclose(create_temp_file);
        return;
    }

    while ((file_content_as_char = fgetc(store_file)) != EOF) {
        fputc(file_content_as_char + key, create_temp_file);
    }
    // while ((file_content_as_char = fgetc(store_file)) != EOF) {
    //     printf("Original: %c (%d), Encrypted: %c (%d)\n",
    //            file_content_as_char, file_content_as_char,
    //            file_content_as_char + key, file_content_as_char + key);
    //     fputc(file_content_as_char + key, create_temp_file);
    // };
    fclose(store_file);
    fclose(create_temp_file);

    remove(filename);
    rename("temp.txt", filename);
    printf("Successfully encrypted the file.\n");
}

void decrypt_file(char *filename, int key) {
    FILE *store_file, *create_temp_file;
    char file_content_as_char;

    store_file = fopen(filename, "r");
    if (store_file == NULL) {
        printf("Error! File not found.\n");
        return;
    }

    create_temp_file = fopen("temp.txt", "w");
    if (create_temp_file == NULL) {
        printf("Error! Can't create temporary file.\n");
        fclose(create_temp_file);
        return;
    }

    while ((file_content_as_char = fgetc(store_file)) != EOF) {
        fputc(file_content_as_char - key, create_temp_file);
    }
    fclose(store_file);
    fclose(create_temp_file);

    remove(filename);
    rename("temp.txt", filename);
    printf("Successfully decrypted the file.\n");
}
