#include <stdio.h>
#include <string.h>

int main() {
    char firstStr[100];
    char secondStr[100];
    int firstLen, secondLen;

    printf("Input the first string:\n");
    scanf("%s", firstStr);

    printf("Input the second string:\n");
    scanf("%s", secondStr);

    firstLen = strlen(firstStr);
    secondLen = strlen(secondStr);

    printf("Is second string present in the last part of the first string?\n");

    if (firstLen >= secondLen) {
        int start = firstLen - secondLen;
        if (strcmp(firstStr + start, secondStr) == 0) {
            printf("Present!\n");
        } else {
            printf("Not present!\n");
        }
    } else {
        printf("Not present!\n");
    }

    return 0;
}
