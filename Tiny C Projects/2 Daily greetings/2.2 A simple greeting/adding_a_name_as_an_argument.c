#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Anata wa subarashīdesun\n");
    }
    else {
        printf("Konnichiwa, %s!\n", argv[1]);
    }
    return 0;
}
