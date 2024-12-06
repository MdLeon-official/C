#include <stdio.h>

int main() {
    char str[10] = {'X','M','L'};
    printf("The reverse of XML is ");
    for (int i = 2; i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
}
