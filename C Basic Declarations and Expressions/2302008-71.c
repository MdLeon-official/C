#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Original string: %s\n", str);
    printf("Number of characters = %lu\n", strlen(str));
    return 0;
}
