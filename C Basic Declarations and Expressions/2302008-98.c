#include<stdio.h>

int main() {
    char text[100000];
    char word[100000];
    int i = 0;
    int j = 0;

    printf("Input some text:\n");

    fgets(text, sizeof(text), stdin);

    while(text[i] != '\0') {
        if(text[i] == ' ' || text[i] == '\n') {
            word[j] = '\0';
            if(j > 0) {
                printf("%s\n", word);
            }
            j = 0;
        }
        else {
            word[j] = text[i];
            j++;
        }
        i++;
    }

    return 0;
}
