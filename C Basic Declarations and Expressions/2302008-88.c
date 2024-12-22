
#include <stdio.h>

int main() {
    printf("|---------------------------------------------------------------------------------------------------------|\n");
    printf("|extended ASCII table - excluding control characters                                                      |\n");
    printf("|   Ch Dec  Hex  |  Ch Dec  Hex   | Ch Dec  Hex | Ch Dec  Hex  | Ch Dec  Hex  | Ch Dec  Hex | Ch Dec  Hex |\n");
    printf("|----------------|----------------|-------------|--------------|--------------|-------------|-------------|\n");

    int i;
    for(i = 0; i < 32; i++) {
        int col1 = i + 32;
        int col2 = i + 64;
        int col3 = i + 96;
        int col4 = i + 128;
        int col5 = i + 160;
        int col6 = i + 192;
        int col7 = i + 224;

        printf("|  %char %3d 0x%02x |  %char %3d 0x%02x |  %c %3d 0x%02x |  %c %3d 0x%02x |  %c %3d 0x%02x |  %c %3d 0x%02x |  %c %3d 0x%02x |\n",
            col1, col1, col1,
            col2, col2, col2,
            col3, col3, col3,
            col4, col4, col4,
            col5, col5, col5,
            col6, col6, col6,
            col7, col7, col7);
    }
    printf("|---------------------------------------------------------------------------------------------------------|\n");
    return 0;
}
